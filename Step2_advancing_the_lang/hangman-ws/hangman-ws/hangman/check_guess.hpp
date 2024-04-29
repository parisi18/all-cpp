#pragma once
#include <vector>
#include <iostream>
#include <map>


void check_guess(char guess, std::vector<char>& wrong_guesses, std::map<char, bool>& guessed_word, std::string secret_word);