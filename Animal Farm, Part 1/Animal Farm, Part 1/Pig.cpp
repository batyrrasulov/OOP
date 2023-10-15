//
//  Pig.cpp
//  Animal Farm, Part 1
//
//  Created by Batyr Rasulov on 3/11/23.
//
#include "Pig.h"

//default constructor
Pig :: Pig() : Animal() {
    
}
//constructor
Pig :: Pig(string name, int weight) : Animal(name, weight) {
    
}
//eat method of Pig
void Pig :: eat() {
    cout << Animal :: getName() << " the pig is eating." << endl;
}
//gainWeight method of Pig
void Pig :: gainWeight() {
    cout << Animal :: getName() << " gained 4 pounds." << endl;
    cout << Animal :: getName() << " now weighs " << this->getWeight() + 4 << "." << endl;
}
