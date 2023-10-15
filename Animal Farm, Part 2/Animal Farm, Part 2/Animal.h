//
//  Animal.h
//  Animal Farm, Part 2
//
//  Created by Batyr Rasulov on 3/26/23.
//
#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <iostream>

using namespace std;

class Animal {
private:
    int weight;
public:
    virtual ~Animal();
    virtual void eat() = 0;
    virtual void gainWeight() = 0;
    virtual string getName() const = 0;
    virtual string getType() const = 0;
    virtual int getWeight() const = 0;
    // pure virtual method
    virtual int getTopWeight() const = 0;
    // pure virtual method
    virtual void speak() const = 0;
};

#endif
