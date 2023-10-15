//
//  Cow.cpp
//  Animal Farm, Part 1
//
//  Created by Batyr Rasulov on 3/11/23.
//
#include "Cow.h"

//default constructor
Cow :: Cow() : Animal() {
    
}
//constructor
Cow :: Cow(string name, int weight) : Animal(name, weight) {
    
}
//eat method of Cow
void Cow :: eat() {
    cout << Animal :: getName() << " the cow is eating." << endl;
}
//gainWeight method of Cow
void Cow :: gainWeight() {
    //add 5 to weight
    this->setWeight(this->getWeight() + 5);
    cout << Animal :: getName() << " gained 5 pounds." << endl;
    cout << Animal :: getName() << " now weighs " << this->getWeight() + 5 << "." << endl;
}
