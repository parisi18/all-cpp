#include "save_file.hpp"

bool save_file(std::vector<std::string> words){
    std::ofstream file;
    file.open("Step2_advancing_the_lang/hangmanGame/words.txt");

    if(file.is_open()){
        file << words.size() << std::endl;
        for(std::string word : words)
            file << word << std::endl;
    }
    else{
        std::cout << "Could not open the file." << std::endl;
        return false;
    }

    file.close();
    return true;
}