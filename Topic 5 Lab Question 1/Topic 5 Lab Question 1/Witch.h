//
//  Witch.h
//  Topic 4 Lab Question 1
//
//  Created by Batyr Rasulov on 3/11/23.
//
#pragma once
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
    Witch(int m);
    int getMagic() const;
    void setMagic(int m);
    int castSpell() const;
    void takeDamage(int dmg);
};

#endif /* Witch_h */
