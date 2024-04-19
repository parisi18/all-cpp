// Author: Rafael Parisi
// Creation date: 2024-04-16
// Alura C++ course exercise - Lesson 1

#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>

bool checkGuessing(int player_guess, int secret_number){
    // Check if the player guess is correct
    bool is_guess_correct = player_guess == secret_number;
    bool is_guess_higher = player_guess > secret_number;

    // Print the result of the guess
    if(is_guess_correct){
        std::cout << "Congratulations! You guessed the secret number!" << std::endl;
    } else if(is_guess_higher){
        std::cout << "Your guess is higher than the secret number!" << std::endl;
    } else {
        std::cout << "Your guess is lower than the secret number!" << std::endl;
    }

    return is_guess_correct;
}

double calculateScore(int player_guess, int secret_number, double &score){
    // Calculate the lost points
    // The lost points are the absolute difference between the player guess and the secret number divided by 2
    double lost_points = abs(player_guess - secret_number) / 2.0;
    score = score - lost_points;
    
    return score;
}

int setDificultyLevel(char difficulty_level){
    int max_attempts = 0;

    // Set the maximum number of attempts based on the difficulty level
    switch (difficulty_level)
    {
    case 'E':
        max_attempts = 15;
        break;
    case 'M':
        max_attempts = 10;
        break;
    case 'H':
        max_attempts = 5;
        break;
    default:
        std::cout << "Invalid difficulty level. Setting to easy." << std::endl;
        max_attempts = 15;
        break;
    }

    return max_attempts;
}

int main(){
    // Set the random seed
    srand(time(NULL));

    // Set the secret number
    const int SECRET_NUMBER = rand()%100;

    // Set the initial number of attempts
    int attempts = 0;

    // Set the player guess
    int player_guess;

    // Set the initial guess as false
    bool is_guess_correct = false;

    // Set the initial score
    double score = 1000.0;

    // Set the difficulty level
    char difficulty_level;

    // Set the maximum number of attempts
    int max_attempts = 0;


    std::cout << "*********************************" << std::endl;
    std::cout << "* Welcome to the guessing game! *" << std::endl;
    std::cout << "*********************************" << std::endl;

    std::cout << "Choose your difficulty level:" << std::endl;
    std::cout << "Easy (E), Medium (M) or Hard (H)" << std::endl;
    std::cin >> difficulty_level;

    // Set the maximum number of attempts based on the difficulty level
    max_attempts = setDificultyLevel(difficulty_level);

    // Loop until the player guess the secret number

    for(attempts = 1; attempts <= max_attempts; attempts++){
        // Print the current attempt
        std::cout << "Attempt " << attempts << std::endl;
        // Ask the player to enter a guess
        std::cout << "Enter your guess: ";
        std::cin >> player_guess;
        // Print the player guess
        std::cout << "Your guess was: " << player_guess << std::endl;

        // Check if the player guess is correct
        if(checkGuessing(player_guess, SECRET_NUMBER))
        {
            is_guess_correct = true;
            break;
        }
        // Calculate the score
        score = calculateScore(player_guess, SECRET_NUMBER, score);
        // Set the precision to 2 decimal places
        std::cout.precision(2);
        // Set the fixed notation
        std::cout << std::fixed;
        std::cout << "Your current score is: " << score << std::endl;
    }

    std::cout << "\nEnd of the game!" << std::endl;

    if(!is_guess_correct){
        std::cout << "You've lost the game! Try again!" << std::endl;
        std::cout << "You didn't guess the secret number." << std::endl;
    }else{
        std::cout << "You guessed the secret number in " << attempts << " attempts." << std::endl;
        std::cout << "You took " << attempts << " attempts to guess the secret number." << std::endl;
    }
        
    std::cout << "Your final score is: " << score << std::endl;
    

    return 0;
}