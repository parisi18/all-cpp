#pragma once
#include <iostream>
#include "not_guessed.hpp"
#include "show_hangman.hpp"
#include "add_word.hpp"
#include "save_file.hpp"

extern std::string secret_word;
extern std::map<char, bool> guessed_word;

void finish_game(std::string secret_word, std::map<char, bool> guessed_word);