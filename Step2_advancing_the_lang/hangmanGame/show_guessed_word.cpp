#include "show_guessed_word.hpp"

extern std::map<char, bool> guessed_word;
extern std::string secret_word;

void show_guessed_word(std::map<char, bool> guessed_word){
    for(char word : secret_word){
        if(guessed_word[word])
            std::cout << word << " ";
        else
            std::cout << "_ ";
    }
    std::cout << std::endl;
}