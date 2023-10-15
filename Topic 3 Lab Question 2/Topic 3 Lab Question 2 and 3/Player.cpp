//
//  Player.cpp
//  Topic 3 Lab Question 2
//
//  Created by Batyr Rasulov on 3/4/23.
//
#include <iostream>
#include "Player.h"

using namespace std;

Player::Player() {
    name = " ";
    HP = 0;
}
Player::Player(string _name, int _HP) {
    name = _name;
    HP = _HP;
    armor.setName("Tanned Leather Armor");
    armor.setDefStrength(115);
    armor.setArmorHP(1000);
}
string Player::getName() const {
    return name;
}
int Player::getHP() const {
    return HP;
}
void Player::setName(string _name) {
    name = _name;
}
void Player::setHP(int _HP) {
    HP = _HP;
}
void Player::showArmor() const {
    armor.display();
}
void Player::printPlayer() const {
    cout << "Player Name: " << name << " | " << "HP: " << HP << endl;
}
std::istream& operator >> (std::istream& in, Player& p) {
    //parameter in is the input source, similar to cin
    //extract the name, defStrength, and armorHealth into
    //the instance variables for the parameter a
    in >> p.name >> p.defenseStrength >> p.armor;
    //return the updated input source
    return in;
}
std::ostream& operator << (std::ostream& out, const Player& p) {
    //parameter out is the output source, similar to cout
    //insert parameter a's instance variable values into the
    //output stream
    //you can add any desired formatting here
    out << p.name << " " << p.defenseStrength << " " << p.armor;
    //return the output source
    return out;
}
