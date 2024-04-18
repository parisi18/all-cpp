#include <iostream>
#include <string>

const std::string SECRET_WORD = "HELLO";


bool correct_guess(char guess){
   for(int i = 0; i < SECRET_WORD.size(); i++){
       if(SECRET_WORD[i] == guess){
           return true;
       }
   }

   return false;
}

int main(){
    std::cout << "Welcome to Hangman!" << std::endl;

    std::cout << SECRET_WORD << std::endl;

    //did not got it right
    bool not_guessed = true;
    bool not_hanged = true;

    while (not_guessed && not_hanged)
    {
        char guess;
        std::cin >> guess;

        if(!correct_guess(guess)){
            std::cout << "You got it wrong!" << std::endl;
        } else {
            std::cout << "You got it right!" << std::endl;
        }
    }
    
    return 0;
}