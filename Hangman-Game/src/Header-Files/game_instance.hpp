#pragma once

#include <string>

class game_instance
{
public:
	explicit game_instance(std::string& word);
private:
	std::string word_to_search_;
	std::string symbols_to_show_;
	int hangman_level_i_;
	int failed_attempts_i_;
};