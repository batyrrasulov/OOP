//
//  Cow.cpp
//  Animal Farm, Part 2
//
//  Created by Batyr Rasulov on 3/26/23.
//
#include "Cow.h"
#include <iostream>

using namespace std;

Cow::Cow() : name("Bessie"), type("Cow"), weight(1000) {
    
}
string Cow::getName() const {
    return name;
}
string Cow::getType() const {
    return type;
}
int Cow::getWeight() const {
    return weight;
}
// implemented method
int Cow::getTopWeight() const {
    return 13;
}
// implemented method
void Cow::speak() const {
    cout << "Moo" << std::endl;
}
//eat method of Cow
void Cow :: eat() {
    cout << " Rosy the cow is eating." << endl;
}
//gainWeight method of Cow
void Cow :: gainWeight() {
    cout << " Rosy gained 5 pounds." << endl;
    cout << " Rosy now weighs " << this->getWeight() + 5 << "." << endl;
}
