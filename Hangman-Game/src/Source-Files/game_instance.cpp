#include "game_instance.hpp"

int game_instance::check_symbol(int key)
{
	int min = 0;
	for(int i = 0; i < word_to_search_.size(); i++)
	{
		if (word_to_search_[i] == key)
		{
			symbols_to_show_[i] = word_to_search_[i];
			min = 1;
		}
	}
	if (min == 0)
	{
		hangman_level_i_++;
	}
	return 0;
}

int game_instance::game_loop()
{
	int result = 1;
	do
	{
		system("cls");
		hangman(hangman_level_i_);
		game_utility::cursor_fill_level(25);
		std::cout << ">> ";
		while (!_kbhit()) {}
		if (_kbhit())
		{
			result = check_symbol(game_utility::get_key());
		}
	} while (!result);
	return 0;
}

int game_instance::entry_point()
{
	game_utility::cursor_fill_level(0);
	if (!intro())
	{
		return 0;
	}
	system("cls");
	game_utility::cursor_fill_level(25);
	
	return game_loop();
}

void game_instance::leave()
{
	system("cls");
	outro();
}

game_instance::game_instance(std::string word)
{
	int len;
	for (len = 0; word[len] != '\0'; len++){}
	word_to_search_.resize(len);
	symbols_to_show_.resize(len);
	for (int i = 0; i < word_to_search_.size(); i++)
	{
		word_to_search_[i] = word[0];
	}
	for (int i = 0; i < symbols_to_show_.size(); i++)
	{
		symbols_to_show_[i] = '_';
	}
	hangman_level_i_ = 0;
	game_state = 1;
	SetConsoleTitleA("Hangman Game");
}
