#include <iostream>
#include "main.hpp"

int main()
{
	game_instance game_instance("test");
	game_instance.entry_point();
	std::cout << "Hello World!" << std::endl;
	std::cin.get();
	return 0;
}
