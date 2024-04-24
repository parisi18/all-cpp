#include "not_guessed.hpp"

bool not_guessed(std::string secret_word, std::map<char, bool> guessed_words){
    for(char word : secret_word){
        if(!guessed_words[word])
            return true;
    }
    return false;
}