#pragma once

#include <vector>
#include <string>
#include "game_drawings.hpp"
#include "game_utility.hpp"

class game_instance : game_drawings
{
public:
	explicit game_instance(std::string word);

	static void entry_point();
	static void leave();
	inline static int game_state;
private:
	static void game_loop();
	static int check_symbol(char key);
	inline static std::vector<char> word_to_search_;
	inline static std::vector<char> symbols_to_show_;
	inline static std::vector<char> tried_characters_;
	inline static int hangman_level_i_;
	inline static size_t completion_level_i_;
};
