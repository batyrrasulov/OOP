//
//  Chicken.h
//  Animal Farm, Part 1
//
//  Created by Batyr Rasulov on 3/11/23.
//
#ifndef Chicken_h
#define Chicken_h
#include <iostream>
#include "Animal.h"

using namespace std;

//class Chicken extends Animal class
class Chicken : public Animal {
public:
    Chicken();
    Chicken(string, int);
    void eat();
    void gainWeight();
};

#endif /* Chicken_h */
