//
//  Animal.h
//  Animal Farm, Part 1
//
//  Created by Batyr Rasulov on 3/11/23.
//
#ifndef Animal_h
#define Animal_h
#include <iostream>

using namespace std;

//Animal class
class Animal {
private:
    string name;
    int weight;
public:
    Animal();
    Animal(string, int);
    string getName() const;
    int getWeight() const;
    void setName(string);
    void setWeight(int);
    virtual void eat() = 0;
    virtual void gainWeight() = 0;
};

#endif /* Animal_h */
