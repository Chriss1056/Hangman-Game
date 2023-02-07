#include "main.hpp"

int main()
{
	int mode;
	std::string word;

	system("cls");
	std::cout << "Do you want to load a random word from a file?" << std::endl << "[1] No" << std::endl << "[2] Yes" << std::endl << ">> ";
	std::cin >> mode;
	if (mode == 2)
	{
		system("cls");
		std::cout << "Please Input the Filename (without .wordlib.hangmansim): ";
		std::string filename = "default";
		std::cin >> filename;
		file_handler file_handler;
		word = file_handler.get_random_word(filename);
	}
	else if (mode == 1)
	{
		system("cls");
		std::cout << "Please choose a word: ";
		std::cin >> word;
	}

	game_instance game_instance(word);
	system("cls");
	game_instance.entry_point();
	game_instance.leave();
	system("pause");
	return 0;
}
