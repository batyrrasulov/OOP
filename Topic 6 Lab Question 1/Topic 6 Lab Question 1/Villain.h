//
//  Villain.h
//  Topic 6 Lab Question 1
//
//  Created by Batyr Rasulov on 3/30/23.
//
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
    virtual void takeDamage(int d) = 0;
    virtual ~Villain() {}
};

#endif /* Villain_h */
