// Author: Rafael Parisi
// Creation date: 2024-04-19
// Alura C++ course exercise - Lesson 2

#include <iostream>
#include <vector>
#include <string>
#include <map>

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

static std::string secret_word;
static std::vector<char> wrong_guesses;
static std::map<char, bool> guessed_words;

int* function(){
	int* j = new int;
	*j = 5;
	
	return j;
}


int main()
{

	int* i;
	i = function();
	
	std::cout << i << std::endl;
	
	delete i;
	
	#if 0
    //show the header
    show_header();

    //initialize the secret word by reading the file and then sorting it
    secret_word = sort_word();

    //if the secret word is empty, the game will not start
    if (secret_word.empty())
    {
        std::cout << "Could not find a word to play." << std::endl;
        return 0;
    }

    //while the player did not guess the word and did not exceeded 5 tries
    while (not_guessed(secret_word, guessed_words) && wrong_guesses.size() < 5)
    {
        //show wrong guesses
        Hangman::show_wrong_guesses(wrong_guesses);

        //show the guessed word
        show_guessed_word(secret_word, guessed_words);
       
        //receive and check the guess
        check_guess(set_guess(), wrong_guesses, guessed_words, secret_word);
    }

    //finish the game
    finish_game(secret_word, guessed_words);
	
	#endif 
    return 0;
}