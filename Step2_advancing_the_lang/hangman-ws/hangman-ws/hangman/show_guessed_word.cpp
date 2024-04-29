#include "show_guessed_word.hpp"

void show_guessed_word(std::string secret_word, const std::map<char, bool>& guessed_words){
    for(char word : secret_word){
        if(guessed_words.find(word) == guessed_words.end() || !guessed_words.at(word))
			std::cout << "_ ";
        else
            std::cout << word << " ";
    }
    std::cout << std::endl;
}