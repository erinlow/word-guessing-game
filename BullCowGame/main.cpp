//
//  main.cpp
//  BullCowGame
//
//  Created by Erin Low on 8/16/17.
//  Copyright © 2017 Erin Low. All rights reserved.
//

#include <iostream>
#include "FBullCowGame.hpp"

void printIntro();
void playGame();
std::string getGuess();
bool askToPlayAgain();

FBullCowGame BCGame; //instantiate a new game

int main() {
    printIntro();
    
    bool bPlayAgain = false;
    do{
        playGame();
        // TODO addd a game summary
        bPlayAgain = askToPlayAgain();
    }
    while(bPlayAgain);
    
    return 0;
}

// introduce the game
void printIntro() {
    constexpr int WordLength = 5;
    std::cout << "Welcome to Bulls and Cows - a fun word game!" << std::endl;
    std::cout << "Can you guess the " << WordLength << " letter isogram I am thinking of?" <<std::endl;
    std::cout << std::endl;
    return;
}

// play the game
void playGame() {
    
    BCGame.Reset();
    int maxTries = BCGame.getMaxTries();
    // loop through the code
    for(int i=0; i<maxTries; i++){
        std::string Guess = getGuess(); // TODO make loop check for valid guesses
        
        // submit valid guess to the game
        // print number of bulls and cows
        
        std::cout << "Your guess was: " << Guess << std::endl;
        std::cout << std::endl;
    }
    
    // TODO summarize the game
    return;
}

// get a guess from the player
std::string getGuess() {
    std::string Guess = "";
    std::cout << "Try " << BCGame.getCurrentTry() <<": What is your guess? ";
    getline(std::cin, Guess);
    return Guess;
}

bool askToPlayAgain() {
    std::string Answer = "";
    std::cout << "Would you like to play again (Y/N)? ";
    getline(std::cin, Answer);
    std::cout << std::endl;
    if ((Answer[0] == 'Y') || (Answer[0] == 'y')){
        return true;
    }
    else{
        return false;
    }
}
