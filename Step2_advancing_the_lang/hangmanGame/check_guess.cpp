#include "check_guess.hpp"
#include "correct_guess.hpp"

void check_guess(char guess, std::vector<char> &wrong_guesses, std::map<char, bool> &guessed_word){
    //check if the guess is correct
    if(!correct_guess(guess, guessed_word)){
        wrong_guesses.push_back(guess);
        std::cout << "You got it wrong!" << std::endl;
        std::cout << std::endl;
    }
    else{
        std::cout << "You got it right!" << std::endl;
        std::cout << std::endl;
    }
}