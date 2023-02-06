#pragma once

#include <string>
#include <vector>
#include <windows.h>
#include <fstream>
#include <ctime>
#include <cstdlib>

class file_handler
{
public:
	static std::string get_random_word(const std::string& filename);
};