//
//  Animal.cpp
//  Animal Farm, Part 1
//
//  Created by Batyr Rasulov on 3/11/23.
//
#include "Animal.h"

//default constructor
Animal :: Animal() {
    this->name = " ";
    this->weight = 0;
}
//constructor
Animal :: Animal(string name, int weight) {
    this->name = name;
    this->weight = weight;
}
//getter for name
string Animal :: getName() const {
    return name;
}
//getter for weight
int Animal :: getWeight() const {
    return weight;
}
//setter for name
void Animal :: setName(string name) {
    this->name = name;
}
//setter for weight
void Animal :: setWeight(int weight) {
    this->weight = weight;
}
