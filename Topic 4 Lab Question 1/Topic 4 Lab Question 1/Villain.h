//
//  Villain.h
//  Topic 4 Lab Question 1
//
//  Created by Batyr Rasulov on 3/11/23.
//
#pragma once
#ifndef Villain_h
#define Villain_h
#include <string>
#include <iostream>

using namespace std;

class Villain {
private:
    string name;
    int HP;
public:
    Villain();
    string getName() const;
    int getHP() const;
    void setName(string n);
    void setHP(int hp);
    void printVillain() const;
    bool stillAlive() const;
};

#endif /* Villain_h */
