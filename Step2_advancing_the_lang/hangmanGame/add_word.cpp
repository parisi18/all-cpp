#include "add_word.hpp"

std::vector<std::string> add_word(){
    std::cout << "Enter the new word using uppercase." << std::endl;
    std::string new_word;
    std::cin >> new_word;

    std::vector<std::string> words_list = read_file();

    if(new_word.empty())
        return words_list;

    words_list.push_back(new_word);

    return words_list;
}