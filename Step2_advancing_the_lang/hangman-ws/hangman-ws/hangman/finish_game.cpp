#include "finish_game.hpp"

void finish_game(std::string secret_word, std::map<char, bool> guessed_words){
    std::cout << "End of the game!" << std::endl;
    std::cout << "The secret word was: " << secret_word << std::endl;

    if(not_guessed(secret_word, guessed_words)){
        std::cout << "You got hanged!" << std::endl;
        show_hangman();
    }
    else{
        std::cout << "You won!" << std::endl;

        std::cout << "Do you want to add new words to the game? (Y/N)" << std::endl;
        char response;
        std::cin >> response;

        //if the player wants to add new words
        if(response == 'Y'){
            std::vector<std::string> new_words = add_word();

            if(new_words.size() > 0){
                if(!save_file(new_words))
                    std::cout << "Could not save the file." << std::endl;
                else
                    std::cout << "Word added!" << std::endl;
            }else
                std::cout << "No word added." << std::endl;
        }else
            std::cout << "Thanks for playing!" << std::endl;
    }
}