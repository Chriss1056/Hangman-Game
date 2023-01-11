#include "game_instance.hpp"

game_instance::game_instance(std::string& word)
{
	word_to_search_ = word;
	for (int i = 0; i < word_to_search_.size(); i++)
	{
		symbols_to_show_[i] = '_';
	}
	hangman_level_i_ = 0;
	failed_attempts_i_ = 0;
}
