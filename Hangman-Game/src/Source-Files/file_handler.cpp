#include "file_handler.hpp"

std::string get_path(const std::string& filename)
{
	char tmp[MAX_PATH];
	GetModuleFileNameA(nullptr, tmp, MAX_PATH);
	auto dir = std::string(tmp);
	int i;
	for (i = (static_cast<int>(dir.length() - 1)); tmp[i] != '\\'; i--){}
	dir.resize(i);
	dir.append("\\wordlibs\\");
	const char* file;
	if (filename.length() == 0)
	{
		file = "default";
	}
	else
	{
		file = filename.c_str();
	}
	dir.append(file);
	dir.append(".wordlib.hangmansim");
	return dir;
}

std::ifstream open_word_lib(const std::string& path)
{
	const char* local_path = path.c_str();
	std::ifstream file;
	file.open(local_path, std::ios::in);
	return file;
}

void cleanup(std::ifstream& file)
{
	file.close();
}

std::string file_handler::get_random_word(const std::string& filename)
{
	const std::string path = get_path(filename);
	std::ifstream file = open_word_lib(path);
	std::vector<std::string> words;
	words.push_back("default");
	if (file.is_open())
	{
		std::string tmp;
		while (file)
		{
			std::getline(file, tmp);
			words.push_back(tmp);
		}
	}
	srand(time(0));
	const int chosen = rand() % words.size();
	cleanup(file);
	return words[chosen];
}
