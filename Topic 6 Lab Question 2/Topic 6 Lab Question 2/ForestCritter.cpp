//
//  ForestCritter.cpp
//  Topic 6 Lab Question 2
//
//  Created by Batyr Rasulov on 4/6/23.
//
#include "ForestCritter.h"

ForestCritter::ForestCritter(bool _rabies) {
    rabies = _rabies;
    setName("Rocky");
    setHP(25);
}
//getter
bool ForestCritter::isRabid() const {
    return rabies;
}
//methods
void ForestCritter::cure() {
    rabies = false;
}
void ForestCritter::infect() {
    rabies = true;
}
void ForestCritter::bite() const {
    cout << getName() << " is biting." << endl;
}
//get HP and subtract d
void ForestCritter::takeDamage(int d){
    setHP(getHP() - d);
    cout << "The Forest Critter is taking damage of " << d << " points. \n";
}
int ForestCritter::attack() const {
    if (rabies) {
        return 100; // return 100 if the ForestCritter has rabies
    } else {
        return 0; // return 0 if the ForestCritter doesn't have rabies
    }
}
