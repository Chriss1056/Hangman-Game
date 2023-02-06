#include "main.hpp"

int main()
{
	file_handler file_handler;
	const std::string filename = "default";
	const std::string tmp = file_handler.get_random_word(filename);
	std::cout << tmp << std::endl << "Please choose a word: ";
	std::string word;
	std::cin >> word;
	game_instance game_instance(word);
	system("cls");
	game_instance.entry_point();
	game_instance.leave();
	system("pause");
	return 0;
}
