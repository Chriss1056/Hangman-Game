#pragma once

#include <iostream>
#include "game_utility.hpp"

class game_drawings
{
protected:
	static int intro();
	static void outro();
	static int hangman(int level);
};