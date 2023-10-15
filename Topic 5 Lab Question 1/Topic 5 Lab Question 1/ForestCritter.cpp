//
//  ForestCritter.cpp
//  Topic 5 Lab Question 1
//
//  Created by Batyr Rasulov on 3/23/23.
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
void ForestCritter::takeDamage(int damage) {
    setHP(getHP() - damage);
}
