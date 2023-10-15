//
//  Chicken.cpp
//  Animal Farm, Part 2
//
//  Created by Batyr Rasulov on 3/26/23.
//
#include "Chicken.h"
#include <iostream>

using namespace std;

Chicken::Chicken() : name("Prissy"), type("Chicken"), weight(1000) {
    
}
string Chicken::getName() const {
    return name;
}
string Chicken::getType() const {
    return type;
}
int Chicken::getWeight() const {
    return weight;
}
// implemented method
int Chicken::getTopWeight() const {
    return 12;
}
// implemented method
void Chicken::speak() const {
    cout << "Moo" << std::endl;
}
//eat method of Chicken
void Chicken :: eat() {
    cout << " Prissy the chicken is eating." << endl;
}
//gainWeight method of Chicken
void Chicken :: gainWeight() {
    cout << " Prissy gained 25 pounds." << endl;
    cout << " Prissy now weighs " << (this->getWeight() + 25) << "." << endl;
}
