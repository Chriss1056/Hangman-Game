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
	const HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	auto CONSOLE_CURSOR_INFO* cInfo = new CONSOLE_CURSOR_INFO;
	if (fill_level <= 0)
	{
		fill_level = 0;
	}
	if (fill_level >= 100)
	{
		fill_level = 100;
	}
	if (fill_level != 0)
	{
		cInfo->bVisible = true;
		cInfo->dwSize = fill_level;
	}
	else
	{
		cInfo->bVisible = false;
		cInfo->dwSize = 0;
	}
	SetConsoleCursorInfo(handle, cInfo);
	free(handle);
	return 0;
}
