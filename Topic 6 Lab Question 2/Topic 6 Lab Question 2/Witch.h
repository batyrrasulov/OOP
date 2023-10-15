//
//  Witch.h
//  Topic 6 Lab Question 2
//
//  Created by Batyr Rasulov on 4/6/23.
//
#ifndef Witch_h
#define Witch_h
#include "Villain.h"
#include <string>
#include <iostream>

using namespace std;

class Witch : public Villain {
private:
    int magic;
public:
    Witch() {}
    Witch(int m);
    int getMagic() const;
    void setMagic(int m);
    int castSpell() const;
    void takeDamage(int dmg);
    int attack() const;
};

#endif /* Witch_h */
