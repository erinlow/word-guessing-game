//
//  FBullCowGame.hpp
//  BullCowGame
//
//  Created by Erin Low on 8/20/17.
//  Copyright © 2017 Erin Low. All rights reserved.
//

#pragma once

#include <stdio.h>
#include <string>

/* FBullCowGame_hpp */

class FBullCowGame{
    
public:
    FBullCowGame(); // Constructor
    
    int getMaxTries() const;
    int getCurrentTry() const;
    bool isGameWon(); // const
    
    bool checkGuessValidity(std::string); // TODO make a more rich return value.
    void Reset(); //TODO make a more rich return value.
    
    // provide a method for counting bulls and cows, and increasing the turn number
    
    
// ^^ Please try and ignore this and focus on the interface above ^^
private:
    // see constructor for initialization
    int maxTries;
    int currentTry;
};
