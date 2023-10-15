//
//  Armor.h
//  Topic 3 Lab Question 2
//
//  Created by Batyr Rasulov on 3/4/23.
//
#pragma once
#include <string>
#ifndef Armor_h
#define Armor_h

using namespace std;

class Armor {
public:
    string name;
    int defenseStrength;
    int armorHP;
    Armor();
    string getName() const;
    int getDefStrength() const;
    int getArmorHealth() const;
    void setName(string _name);
    void setDefStrength(int _defenseStrength);
    void setArmorHP(int _armorHP);
    void display() const;
    void takeHit(int damage);
    //Armor class
    friend std::istream& operator >> (std::istream& in, Armor& p);
    friend std::ostream& operator << (std::ostream& out, const Armor& p);
};

#endif /* Armor_h */
