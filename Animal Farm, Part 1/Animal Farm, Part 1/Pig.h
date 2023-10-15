//
//  Pig.h
//  Animal Farm, Part 1
//
//  Created by Batyr Rasulov on 3/11/23.
//
#ifndef Pig_h
#define Pig_h
#include <iostream>
#include "Animal.h"

using namespace std;

//class Pig extends Animal class
class Pig : public Animal {
public:
    Pig();
    Pig(string, int);
    void eat();
    void gainWeight();
};

#endif /* Pig_h */
