//
//  main.cpp
//  5 Dice, 3 Rolls
//
//  Created by Batyr Rasulov on 2/11/23.
//
#include <iostream>

using namespace std;

class Die {
private:
    //number of the sides on the die
    int sides;
    //face-value of the die
    int face;
public:
    Die() {
        //initialize the value to 0
        //if no parameter specified it will be initialized to 6
        sides = 6;
        rollDice();
    }
    Die(int s) {
        //initialize the sides with the parameter
        //initialize value to 0
        sides = s;
        rollDice();
    }
    void rollDice() {
        //roll the die and update the value
        face = rand() % sides + 1;
    }
    int value() {
        //return the face value of the die
        //returns the instance variable value
        return face;
    }
};
