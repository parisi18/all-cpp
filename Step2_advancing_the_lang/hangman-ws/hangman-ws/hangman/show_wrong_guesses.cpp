#include "show_wrong_guesses.hpp"


namespace Hangman {
	void show_wrong_guesses(const std::vector<char>& wrong_guesses){
    std::cout << "Wrong guesses: ";
    for(char wrong : wrong_guesses)
        std::cout << wrong << " ";

    std::cout << std::endl;
	}
}

