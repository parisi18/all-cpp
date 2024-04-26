#pragma once
#include <vector>
#include <iostream>
#include <map>

extern std::vector<char> wrong_guesses;
extern char guess;

void check_guess(char guess, std::vector<char> &wrong_guesses, std::map<char, bool> &guessed_word);