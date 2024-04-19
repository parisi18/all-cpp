#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include <ctime>
#include <cstdlib>

std::string secret_word;
std::map<char, bool> guessed_word;
std::vector<char> wrong_guesses;
std::vector<std::vector<char>> hangman;

bool correct_guess(char guess){
    for(char word : secret_word){
        if(guess == word){
            guessed_word[guess] = true;
            return true;
        }
    }

   return false;
}

bool is_guessed(char word){
    return guessed_word[word];
}

void show_guessed_word(){
    for(char word : secret_word){
        if(is_guessed(word))
            std::cout << word << " ";
        else
            std::cout << "_ ";
    }
    std::cout << std::endl;
}

void show_wrong_guesses(){
    std::cout << "Wrong guesses: ";
    for(char wrong : wrong_guesses)
        std::cout << wrong << " ";

    std::cout << std::endl;
}

void save_wrong_guess(char guess){
    wrong_guesses.push_back(guess);
}

bool not_guessed(){
    for(char word : secret_word){
        if(!is_guessed(word))
            return true;
    }
    return false;
}

bool not_hanged(){
    return wrong_guesses.size() < 5;
}

void show_hangman(){
    std::cout << "  _________     " << std::endl;
    std::cout << "  |       |     " << std::endl;
    std::cout << "  |       O     " << std::endl;
    std::cout << "  |      /|\\   " << std::endl;
    std::cout << "  |      / \\   " << std::endl;
}

void show_header(){
    std::cout << "***********************" << std::endl;
    std::cout << "**Welcome to Hangman!**" << std::endl;
    std::cout << "***********************" << std::endl;
    std::cout << std::endl;
}

char set_guess(){
    //initialize the guessed word
    char guess;
    //get the guess from the player
    std::cout << "Enter a letter: ";
    std::cin >> guess;
    std::cout << std::endl;

    return guess;
}

void check_guess(char guess){
    //check if the guess is correct
    if(!correct_guess(guess)){
        save_wrong_guess(guess);
        std::cout << "You got it wrong!" << std::endl;
        std::cout << std::endl;
    }
    else{
        std::cout << "You got it right!" << std::endl;
        std::cout << std::endl;
    }
}

std::vector<std::string> read_file(){
    std::ifstream file;
    std::vector<std::string>words;
    file.open("words.txt");

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

std::string sort_word(std::vector<std::string> words_to_sort){

    if(words_to_sort.size() == 0)
        return "";

    std::srand(time(NULL));
    int index = std::rand() % words_to_sort.size();
    std::string word = words_to_sort[index];
    return word;
}

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

bool save_file(std::vector<std::string> words){
    std::ofstream file;
    file.open("words.txt");

    if(file.is_open()){
        file << words.size() << std::endl;
        for(std::string word : words){
            file << word << std::endl;
        }
    }
    else{
        std::cout << "Could not open the file." << std::endl;
        return false;
    }

    file.close();
    return true;
}

void finish_game(){
    std::cout << "End of the game!" << std::endl;
    std::cout << "The secret word was: " << secret_word << std::endl;

    if(not_guessed()){
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

int main(){
    
    //show the header
    show_header();

    //initialize the secret word by reading the file and then sorting it
    secret_word = sort_word(read_file());

    //if the secret word is empty, the game will not start
    if (secret_word.empty())
    {
        std::cout << "Could not find a word to play." << std::endl;
        return 0;
    }

    //while the player did not guess the word and did not get hanged
    while (not_guessed() && not_hanged())
    {
        //show wrong guesses
        show_wrong_guesses();

        //show the guessed word
        show_guessed_word();
       
        //receive and check the guess
        check_guess(set_guess());
    }

    //finish the game
    finish_game();

    return 0;
}