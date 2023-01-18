#pragma once

#include <vector>
#include "game_utility.hpp"

class game_instance : game_utility
{
public:
	explicit game_instance(const char* word);

	static int entry_point();
private:
	std::vector<char> word_to_search_;
	std::vector<char> symbols_to_show_;
	int hangman_level_i_;
	int failed_attempts_i_;
	int game_state_;
};
