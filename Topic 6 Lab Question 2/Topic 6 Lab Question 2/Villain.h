//
//  Villain.h
//  Topic 6 Lab Question 2
//
//  Created by Batyr Rasulov on 4/6/23.
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
    virtual ~Villain() {};
    virtual int attack() = 0;
};

#endif /* Villain_h */
