#include "main.hpp"

#include <cstdio>

int main()
{
	std::cout << "Please choose a word: ";
	std::string word;
	std::cin >> word;
	game_instance game_instance(word);
	system("cls");
	while (game_instance.game_state)
	{
		game_instance.game_state = game_instance.entry_point();
	}
	game_instance.leave();
	return 0;
}
