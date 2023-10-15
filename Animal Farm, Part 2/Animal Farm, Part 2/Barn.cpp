//
//  Barn.cpp
//  Animal Farm, Part 2
//
//  Created by Batyr Rasulov on 3/26/23.
//
#include <iostream>
#include "Barn.h"
#include "Cow.h"
#include "Pig.h"
#include "Chicken.h"
#include <iostream>

using namespace std;

// update the constructor so that it populates the array with new Cow, Pig, Chicken
Barn::Barn() {
    for (int i = 0; i < 5; i++) {
        animals[i] = new Cow();
    }
    for (int i = 5; i < 10; i++) {
        animals[i] = new Pig();
    }
    for (int i = 10; i < 15; i++) {
        animals[i] = new Chicken();
    }
}
// destructor that should delete all of the class' objects
Barn::~Barn() {
    for (int i = 0; i < 15; i++) {
        delete animals[i];
    }
}
// method to show animals and which does Barn contain at the moment
void Barn::showAnimals() {
    cout << "Barn contains: " << endl;
    cout << "              Bessie the Cow" << endl;
    cout << "              Barnum the Pig" << endl;
    cout << "              Prissy the Chicken" << endl;
}
// updated instead of three single one method to feed all the animals in the barn
void Barn::feedAnimals() {
    for (int i = 0; i < 15; i++) {
        animals[i]->eat();
        animals[i]->gainWeight();
    }
}
// boolean to check if no animals are not out into the pasture
bool isOutToPasture = false;
// method to print animals out to pasture
void Barn::outToPasture() {
    for (int i = 0; i < 15; i++) {
        Animal* animal = animals[i];
        if (animal != nullptr) {
            // if the animal meets or exceeds the top weight, then it is put out to pasture
            if (animal->getWeight() >= animal->getTopWeight()) {
                string animalName = animal->getName();
                string animalType = animal->getType();
                cout << animalName << " the " << animalType << " is put out to pasture." << endl;
            // method that uses casting to determine animal type and replace with a new instance of the same type
                if (Pig* pig = dynamic_cast<Pig*>(animal)) {
                    animals[i] = new Pig();
                }
                else if (Cow* cow = dynamic_cast<Cow*>(animal)) {
                    animals[i] = new Cow();
                }
                else if (Chicken* chicken = dynamic_cast<Chicken*>(animal)) {
                    animals[i] = new Chicken();
                }
                delete animal;
                isOutToPasture = true;
            }
        }
    }
}
// show if any replaced animals were updated to the Barn
void Barn::showReplacedAnimals() {
    if (!isOutToPasture) {
        cout << "Barn contains: " << endl;
        cout << "              Bessie the Cow" << endl;
        cout << "              Barnum the Pig" << endl;
        cout << "              Prissy the Chicken" << endl;
    }
}
