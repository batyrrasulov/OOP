//
//  Dragon.cpp
//  Topic 5 Lab Question 1
//
//  Created by Batyr Rasulov on 3/23/23.
//
#include "Dragon.h"

Dragon::Dragon(int _flameDistance, int _flameTemperature, string _scaleType) {
    flameDistance = _flameDistance;
    flameTemperature = _flameTemperature;
    scaleType = _scaleType;
    setName("Susan");
    setHP(1000);
}
//methods
int Dragon::attack() const {
    return (flameDistance + flameTemperature) / 5;
}
int Dragon::rageAttack() const {
    return (flameDistance + flameTemperature) / 2;
}
void Dragon::takeDamage(int damage) {
    setHP(getHP() - damage);
}
