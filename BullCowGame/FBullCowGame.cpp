//
//  FBullCowGame.cpp
//  BullCowGame
//
//  Created by Erin Low on 8/20/17.
//  Copyright © 2017 Erin Low. All rights reserved.
//

#include "FBullCowGame.hpp"

FBullCowGame::FBullCowGame() { Reset(); }

int FBullCowGame::getMaxTries() const { return maxTries; }
int FBullCowGame::getCurrentTry() const { return currentTry; }

void FBullCowGame::Reset() {

    constexpr int MAX_TRIES = 5;
    maxTries = MAX_TRIES;
    
    currentTry = 1;
    
}

bool FBullCowGame::isGameWon(){
    return false;
}

bool FBullCowGame::checkGuessValidity(std::string){
    return false;
}
