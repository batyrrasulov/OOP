//
//  Chicken.cpp
//  Animal Farm, Part 1
//
//  Created by Batyr Rasulov on 3/11/23.
//
#include "Chicken.h"

//default constructor
Chicken :: Chicken() : Animal() {
    
}
//constructor
Chicken :: Chicken(string name, int weight) : Animal(name, weight) {
    
}
//eat method of Chicken
void Chicken :: eat() {
    cout << Animal :: getName() << " the chicken is eating." << endl;
}
//gainWeight method of Chicken
void Chicken :: gainWeight() {
    cout << Animal :: getName() << " gained 25 pounds." << endl;
    cout << Animal :: getName() << " now weighs " << (this->getWeight() + 25) << "." << endl;
}
