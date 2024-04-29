#pragma once
#include <string>
#include <map>

bool correct_guess(char guess, std::map<char, bool>& guessed_word, std::string secret_word);