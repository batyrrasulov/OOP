//
//  Dragon.h
//  Topic 4 Lab Question 1
//
//  Created by Batyr Rasulov on 3/11/23.
//
#pragma once
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
    Dragon(int fD, int fT, string sT);
    int attack() const;
    int rageAttack() const;
    void takeDamage(int dmg);
};

#endif /* Dragon_h */
