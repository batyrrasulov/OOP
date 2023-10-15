//
//  Barn.h
//  Animal Farm, Part 2
//
//  Created by Batyr Rasulov on 3/26/23.
//
#ifndef BARN_H
#define BARN_H
#include "Animal.h"

class Barn {
public:
    Barn();
    ~Barn();
    void showAnimals();
    void feedAnimals();
    void outToPasture();
    void showReplacedAnimals();
private:
    // a single array type of Animal which will hold 15 variables
    Animal* animals[15];
};

#endif
