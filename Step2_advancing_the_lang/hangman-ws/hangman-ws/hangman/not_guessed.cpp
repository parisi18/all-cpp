#include "not_guessed.hpp"

bool not_guessed(std::string& secret_word, const std::map<char, bool>& guessed_words){
    for(char word : secret_word){
		if(guessed_words.find(word) == guessed_words.end() || !guessed_words.at(word))
            return true;
    }
    return false;
}