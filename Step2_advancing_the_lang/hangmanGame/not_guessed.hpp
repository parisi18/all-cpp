#pragma once
#include <string>
#include <map>

extern std::map<char, bool> guessed_word;
extern std::string secret_word;

bool not_guessed(std::string secret_word, std::map<char, bool> guessed_word);