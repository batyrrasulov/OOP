//
//  Armor.cpp
//  Topic 3 Lab Question 2
//
//  Created by Batyr Rasulov on 3/4/23.
//
#include <iostream>
#include "Armor.h"

using namespace std;

Armor::Armor() {
    name = " ";
    defenseStrength = 0;
    armorHP = 0;
}
string Armor::getName() const {
    return name;
}
int Armor::getDefStrength() const {
    return defenseStrength;
}
int Armor::getArmorHealth() const {
    return armorHP;
}
void Armor::setName(string _name) {
    name = _name;
}
void Armor::setDefStrength(int _defenseStrength) {
    defenseStrength = _defenseStrength;
}
void Armor::setArmorHP(int _armorHP) {
    armorHP = _armorHP;
}
void Armor::display() const {
    cout << "----------<>-----------" << endl;
    cout << " Armor Name: " << name << endl;
    cout << " Defense Strength: " << defenseStrength << endl;
    cout << " Armor Health: " << armorHP << endl;
    cout << "----------<>-----------" << endl;
}
void Armor::takeHit(int damage) {
    armorHP -= damage;
};
std::istream& operator >> (std::istream& in, Armor& a) {
    //parameter in is the input source, similar to cin
    //extract the name, defStrength, and armorHealth into
    //the instance variables for the parameter a
    in >> a.name >> a.defenseStrength >> a.armorHP;
    //return the updated input source
    return in;
}
std::ostream& operator << (std::ostream& out, const Armor& a) {
    //parameter out is the output source, similar to cout
    //insert parameter a's instance variable values into the
    //output stream
    //you can add any desired formatting here
    out << a.name << " " << a.defenseStrength << " " << a.armorHP;
    //return the output source
    return out;
}
