//
//  Cow.h
//  Animal Farm, Part 1
//
//  Created by Batyr Rasulov on 3/11/23.
//
#ifndef Cow_h
#define Cow_h
#include <iostream>
#include "Animal.h"

using namespace std;

//class Cow extends Animal class
class Cow : public Animal {
public:
    Cow();
    Cow(string, int);
    void eat();
    void gainWeight();
};

#endif /* Cow_h */
