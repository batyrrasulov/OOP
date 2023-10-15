//
//  Dragon.cpp
//  Topic 6 Lab Question 1
//
//  Created by Batyr Rasulov on 3/30/23.
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
//get HP and subtract d
void Dragon::takeDamage(int d){
    setHP(getHP() - d);
    cout << "The Dragon is taking damage of " << d << " points. \n";
}
