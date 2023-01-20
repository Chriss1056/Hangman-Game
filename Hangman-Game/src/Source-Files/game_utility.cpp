#include "game_utility.hpp"

int game_utility::get_key()
{
	int key = _getch();
	if (key >= 224)
	{
		key += _getch();
	}
	return key;
}

int game_utility::change_background_color()
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	free(handle);
	return 0;
}

int game_utility::change_foreground_color()
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	free(handle);
	return 0;
}

int game_utility::cursor_fill_level(int fill_level)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	free(handle);
	return 0;
}
