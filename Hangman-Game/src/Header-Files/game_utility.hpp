#pragma once

#include <conio.h>
#include <windows.h>

class game_utility
{
protected:
	static int get_key();
	static int change_background_color();
	static int change_foreground_color();
	static int cursor_fill_level(int fill_level);
};