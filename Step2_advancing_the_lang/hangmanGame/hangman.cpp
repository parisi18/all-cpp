// Author: Rafael Parisi
// Creation date: 2024-04-19
// Alura C++ course exercise - Lesson 2

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include <ctime>
#include <cstdlib>

#include "correct_guess.hpp"
#include "not_guessed.hpp"
#include "show_wrong_guesses.hpp"
#include "not_guessed.hpp"
#include "show_header.hpp"
#include "show_guessed_word.hpp"
#include "set_guess.hpp"
#include "read_file.hpp"
#include "sort_word.hpp"
#include "finish_game.hpp"
#include "check_guess.hpp"

std::string secret_word;
std::vector<char> wrong_guesses;
std::map<char, bool> guessed_words;

int main(){
    
    //show the header
    show_header();

    //initialize the secret word by reading the file and then sorting it
    secret_word = sort_word(read_file());

    //if the secret word is empty, the game will not start
    if (secret_word.empty())
    {
        std::cout << "Could not find a word to play." << std::endl;
        return 0;
    }

    //while the player did not guess the word and did not get hanged
    while (not_guessed(secret_word, guessed_words) && wrong_guesses.size() < 5)
    {
        //show wrong guesses
        show_wrong_guesses(wrong_guesses);

        //show the guessed word
        show_guessed_word(guessed_words);
       
        //receive and check the guess
        check_guess(set_guess(), wrong_guesses, guessed_words);
    }

    //finish the game
    finish_game(secret_word, guessed_words);

    return 0;
}