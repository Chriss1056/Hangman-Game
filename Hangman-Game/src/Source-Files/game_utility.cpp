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

void game_utility::goto_xy(short x, short y)
{
	const HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	const COORD cursor = {x, y};
	SetConsoleCursorPosition(handle, cursor);
}

void game_utility::change_background_color(background color)
{
	const HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, (WORD)color);
}

void game_utility::change_foreground_color(foreground color)
{
	const HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, (WORD)color);
}

void game_utility::cursor_fill_level(int fill_level)
{
	const HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO* c_info = new CONSOLE_CURSOR_INFO;
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
		c_info->bVisible = true;
		c_info->dwSize = fill_level;
	}
	else
	{
		c_info->bVisible = false;
		c_info->dwSize = 0;
	}
	SetConsoleCursorInfo(handle, c_info);
}
