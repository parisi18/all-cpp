#include "correct_guess.hpp"

bool correct_guess(char guess, std::map<char, bool> &guessed_word){
    for(char word : secret_word){
        if(guess == word){
            guessed_word[guess] = true;
            return true;
        }
    }

   return false;
}