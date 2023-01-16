#pragma once

#include <vector>

class game_instance
{
public:
	explicit game_instance(const char* word);
private:
	std::vector<char> word_to_search_;
	std::vector<char> symbols_to_show_;
	int hangman_level_i_;
	int failed_attempts_i_;
};
