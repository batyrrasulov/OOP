//
//  main.cpp
//  Animal Farm, Part 2
//
//  Created by Batyr Rasulov on 3/26/23.
//
#include <iostream>
#include "Barn.h"
#include "Chicken.h"
#include "Cow.h"
#include "Pig.h"
#include "Animal.h"

int main() {
    Barn myBarn;
    myBarn.showAnimals();
    myBarn.feedAnimals();
    myBarn.outToPasture();
    myBarn.showReplacedAnimals();
    return 0;
}
