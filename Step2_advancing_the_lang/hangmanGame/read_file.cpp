#include "read_file.hpp"

std::vector<std::string> read_file(){
    std::ifstream file;
    std::vector<std::string>words;
    file.open("Step2_advancing_the_lang/hangmanGame/words.txt");

    if(file.is_open()){
        int words_quantity;
        file >> words_quantity;

        std::string word;
        for(int i = 0; i < words_quantity; i++){
            file >> word;
            words.push_back(word);
        }
    }
    else{
        std::cout << "Could not open the file." << std::endl;
        return std::vector<std::string>();
    }

    file.close();
    return words;
}