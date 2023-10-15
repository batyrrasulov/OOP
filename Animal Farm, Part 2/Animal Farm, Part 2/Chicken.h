//
//  Chicken.h
//  Animal Farm, Part 2
//
//  Created by Batyr Rasulov on 3/26/23.
//
#ifndef CHICKEN_H
#define CHICKEN_H
#include "Animal.h"
#include <iostream>

using namespace std;

class Chicken : public Animal {
public:
    Chicken();
    virtual void eat() override;
    virtual string getName() const override;
    virtual string getType() const override;
    virtual int getWeight() const override;
    virtual int getTopWeight() const override;
    virtual void speak() const override;
    void gainWeight() override;
private:
    string name;
    string type;
    int weight;
};

#endif
