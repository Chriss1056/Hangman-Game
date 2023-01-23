#include "game_instance.hpp"

int game_instance::entry_point()
{
	return 1;
}

game_instance::game_instance(const char* word)
{
	int len;
	for (len = 0; word[len] != '\0'; len++){}
	word_to_search_.resize(len);
	symbols_to_show_.resize(len);
	hangman_level_i_ = 0;
	failed_attempts_i_ = 0;
	game_state_ = 1;
	SetConsoleTitleA("Hangman Game");
}
