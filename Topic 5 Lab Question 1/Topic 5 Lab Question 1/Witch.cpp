//
//  Witch.cpp
//  Topic 5 Lab Question 1
//
//  Created by Batyr Rasulov on 3/23/23.
//
#include "Witch.h"

Witch::Witch(int _magic) {
    magic = _magic;
    setName("Wendy");
    setHP(50);
}
//getter
int Witch::getMagic() const {
    return magic;
}
//setter
void Witch::setMagic(int _magic) {
    magic = _magic;
}
//methods
int Witch::castSpell() const {
    return magic;
}
void Witch::takeDamage(int damage) {
    setHP(getHP() - damage);
}
