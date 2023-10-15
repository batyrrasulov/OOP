//
//  Pig.cpp
//  Animal Farm, Part 2
//
//  Created by Batyr Rasulov on 3/26/23.
//
#include "Pig.h"
#include <iostream>

using namespace std;

Pig::Pig() : name("Barnum"), type("Pig"), weight(1000) {
    
}
string Pig::getName() const {
    return name;
}
std::string Pig::getType() const {
    return type;
}
int Pig::getWeight() const {
    return weight;
}
// implemented method
int Pig::getTopWeight() const {
    return 280;
}
//implemented method
void Pig::speak() const {
    cout << "Moo" << std::endl;
}
//eat method of Pig
void Pig :: eat() {
    cout << " Barnum the pig is eating." << endl;
}
//gainWeight method of Pig
void Pig :: gainWeight() {
    cout << " Barnum gained 4 pounds." << endl;
    cout << " Barnum now weighs " << this->getWeight() + 4 << "." << endl;
}
