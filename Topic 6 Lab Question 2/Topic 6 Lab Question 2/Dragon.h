//
//  Dragon.h
//  Topic 6 Lab Question 2
//
//  Created by Batyr Rasulov on 4/6/23.
//
#ifndef Dragon_h
#define Dragon_h
#include "Villain.h"
#include <string>
#include <iostream>

using namespace std;

class Dragon : public Villain {
private:
    string scaleType;
    int flameDistance;
    int flameTemperature;
public:
    Dragon() {}
    Dragon(int fD, int fT, string sT);
    int attack() const;
    int rageAttack() const;
    void takeDamage(int dmg);
};

#endif /* Dragon_h */
