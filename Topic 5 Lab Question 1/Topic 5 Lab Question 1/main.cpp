//
//  main.cpp
//  Topic 5 Lab Question 1
//
//  Created by Batyr Rasulov on 3/23/23.
//
#include "Witch.h"
#include "Dragon.h"
#include "ForestCritter.h"
#include <iostream>

using namespace std;

int main() {
    ForestCritter critter(true);
    Witch witch(23);
    Dragon dragon(100, 100, "plate");
    critter.printVillain();
    if (critter.isRabid()) {
        cout << critter.getName() << " is sick! Now curing ... " << endl;
        critter.cure();
    }
    dragon.printVillain();
    dragon.takeDamage(witch.castSpell());
    dragon.printVillain();
    critter.printVillain();
    critter.takeDamage(dragon.attack());
    if (critter.stillAlive()) {
        cout << critter.getName() << " survived a dragon attack!" << endl;
    }
    else {
        cout << critter.getName() << " has been defeated." << endl;
    }
}
