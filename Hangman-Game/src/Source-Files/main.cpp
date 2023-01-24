#include "main.hpp"

int main()
{
	std::cout << "Please choose a word: ";
	std::string word;
	std::cin >> word;
	game_instance game_instance(word);
	system("cls");
	game_instance.entry_point();
	game_instance.leave();
	system("pause");
	return 0;
}
