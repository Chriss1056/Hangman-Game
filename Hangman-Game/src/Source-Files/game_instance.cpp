#include "game_instance.hpp"

int game_instance::check_symbol(char key)
{
	int min = 0;
	for(int i = 0; i < word_to_search_.size(); i++)
	{
		if (word_to_search_[i] == key)
		{
			if (symbols_to_show_[i] != key)
			{
				completion_level_i_++;
				symbols_to_show_[i] = key;
			}
			min = 1;
		}
	}
	if (min == 0)
	{
		hangman_level_i_++;
		size_t size = tried_characters_.size();
		size++;
		tried_characters_.resize(size);
		tried_characters_[size-1] = key;
	}
	return 0;
}

void game_instance::game_loop()
{
	int result = 1;
	do
	{
		system("cls");
		hangman(hangman_level_i_);
		game_utility::cursor_fill_level(25);
		for (int i = 0; i < symbols_to_show_.size(); i++)
		{
			std::cout << symbols_to_show_[i] << " ";
		}
		std::cout << std::endl << std::endl;
		for (int i = 0; i < tried_characters_.size(); i++)
		{
			std::cout << tried_characters_[i] << ", ";
		}
		std::cout << std::endl << std::endl;
		std::cout << "Please Press a Key >> ";
		while (!_kbhit());
		if (_kbhit())
		{
			result = check_symbol(static_cast<char>(game_utility::get_key()));
		}
		if (hangman_level_i_ > 5)
		{
			game_state = 1;
			break;
		}
		if (completion_level_i_ == symbols_to_show_.size())
		{
			game_state = 0;
			break;
		}
	} while (!result);
}

void game_instance::entry_point()
{
	game_utility::cursor_fill_level(0);
	if (!intro())
	{
		game_state = -1;
		return;
	}
	system("cls");
	game_utility::cursor_fill_level(25);
	
	game_loop();
}

void game_instance::leave()
{
	system("cls");
	if(game_state == 0)
	{
		std::cout << "                 Good Job! You have ";
		game_utility::change_foreground_color(foreground::RXXD);
		std::cout << "WON";
		game_utility::change_foreground_color(foreground::RGBD);
		std::cout << " the Game! See you soon!                 " << std::endl << std::endl;
	}
	else if (game_state == 1)
	{
		std::cout << "              I am sorry, but you ";
		game_utility::change_foreground_color(foreground::RXXD);
		std::cout << "LOST";
		game_utility::change_foreground_color(foreground::RGBD);
		std::cout << " the Game. Try again later.              " << std::endl << std::endl;
	}
	else if (game_state == -1)
	{
		game_utility::change_foreground_color(foreground::RXXD);
		std::cout << "Fatal Error." << std::endl;
		game_utility::change_foreground_color(foreground::RGBD);
		return;
	}
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
		word_to_search_[i] = word[i];
	}
	for (int i = 0; i < symbols_to_show_.size(); i++)
	{
		symbols_to_show_[i] = '_';
	}
	hangman_level_i_ = 0;
	completion_level_i_ = 0;
	game_state = 1;
	SetConsoleTitleA("Hangman Game");
}
