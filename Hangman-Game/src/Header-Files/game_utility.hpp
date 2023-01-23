#pragma once

#include <conio.h>
#include <windows.h>

#define ENTER_KEY 13

enum class foreground
{
	XXBD = FOREGROUND_BLUE,
	XGXD = FOREGROUND_GREEN,
	XGBD = FOREGROUND_GREEN | FOREGROUND_BLUE,
	RXXD = FOREGROUND_RED,
	RXBD = FOREGROUND_RED | FOREGROUND_BLUE,
	RGXD = FOREGROUND_RED | FOREGROUND_GREEN,
	RGBD = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE,
	XXBL = FOREGROUND_BLUE | FOREGROUND_INTENSITY,
	XGXL = FOREGROUND_GREEN | FOREGROUND_INTENSITY,
	XGBL = FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY,
	RXXL = FOREGROUND_RED | FOREGROUND_INTENSITY,
	RXBL = FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY,
	RGXL = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY,
	RGBL = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY
};

enum class background
{
	XXBD = BACKGROUND_BLUE,
	XGXD = BACKGROUND_GREEN,
	XGBD = BACKGROUND_GREEN | BACKGROUND_BLUE,
	RXXD = BACKGROUND_RED,
	RXBD = BACKGROUND_RED | BACKGROUND_BLUE,
	RGXD = BACKGROUND_RED | BACKGROUND_GREEN,
	RGBD = BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE,
	XXBL = BACKGROUND_BLUE | BACKGROUND_INTENSITY,
	XGXL = BACKGROUND_GREEN | BACKGROUND_INTENSITY,
	XGBL = BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY,
	RXXL = BACKGROUND_RED | BACKGROUND_INTENSITY,
	RXBL = BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_INTENSITY,
	RGXL = BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY,
	RGBL = BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY
};

namespace game_utility
{
	int get_key();
	void goto_xy(short x, short y);
	void change_background_color(background color);
	void change_foreground_color(foreground color);
	void cursor_fill_level(int fill_level);
};