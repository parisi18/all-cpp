#include "set_guess.hpp"

char set_guess(){
    //initialize the guessed word
    char guess;
    //get the guess from the player
    std::cout << "Enter a letter: ";
    std::cin >> guess;
    std::cout << std::endl;

    return guess;
}