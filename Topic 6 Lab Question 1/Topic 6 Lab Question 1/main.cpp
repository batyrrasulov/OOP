//
//  main.cpp
//  Topic 6 Lab Question 1
//
//  Created by Batyr Rasulov on 3/30/23.
//
#include "Witch.h"
#include "Dragon.h"
#include "ForestCritter.h"
#include "Villain.h"
#include <iostream>

using namespace std;

int main() {
    Villain * villain = nullptr;
    
    villain = new Witch();
    villain -> takeDamage(23);
    delete villain;
    
    villain = new ForestCritter();
    villain -> takeDamage(true);
    delete villain;
    
    villain = new Dragon();
    villain -> takeDamage(100);
    delete villain;
    
    return 0;
}
