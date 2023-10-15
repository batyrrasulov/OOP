//
//  Barn.h
//  Animal Farm, Part 1
//
//  Created by Batyr Rasulov on 3/11/23.
//
#ifndef Barn_h
#define Barn_h
#include <iostream>
#include <vector>
#include "Pig.h"
#include "Chicken.h"
#include "Cow.h"

using namespace std;

//Barn class
class Barn {
private:
    vector <Pig> pigPen;
    vector <Chicken> coop;
    vector <Cow> cowPen;
public:
    Barn();
    void feedPigs();
    void feedChickens();
    void feedCows();
};

#endif /* Barn_h */
