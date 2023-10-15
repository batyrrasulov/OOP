//
//  Villain.cpp
//  Topic 6 Lab Question 1
//
//  Created by Batyr Rasulov on 3/30/23.
//
#include "Villain.h"

Villain::Villain() {
    name = " ";
    HP = 100;
}
//getters
string Villain::getName() const {
    return name;
}
int Villain::getHP() const {
    return HP;
}
//setters
void Villain::setName(string _name) {
    name = _name;
}
void Villain::setHP(int _HP) {
    HP = _HP;
}
//methods
void Villain::printVillain() const {
    cout << "I am known as " << name << " and I have " << HP << " health." << endl;
}
bool Villain::stillAlive() const {
    bool alive = true;
    if (HP <= 0) {
        alive = false;
    }
    return alive;
}
