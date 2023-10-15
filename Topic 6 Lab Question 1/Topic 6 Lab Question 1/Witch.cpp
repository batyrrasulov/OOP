//
//  Witch.cpp
//  Topic 6 Lab Question 1
//
//  Created by Batyr Rasulov on 3/30/23.
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
//get HP and subtract d
void Witch::takeDamage(int d){
    setHP(getHP() - d);
    cout << "The Witch is taking damage of " << d << " points. \n";
}
