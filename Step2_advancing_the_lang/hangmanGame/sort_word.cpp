#include "sort_word.hpp"

std::string sort_word(std::vector<std::string> words_to_sort){

    if(words_to_sort.size() == 0)
        return "";

    std::srand(time(NULL));
    int index = std::rand() % words_to_sort.size();
    std::string word = words_to_sort[index];
    return word;
}