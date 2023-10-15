//
//  Armor.h
//  Topic3LabQuestion1
//
//  Created by Batyr Rasulov on 2/16/23.
//
#ifndef Armor_h
#define Armor_h
#include <string>

using namespace std;

class Armor {
public:
    Armor();
    Armor(string _name, int _defenceStrength, int _armorHealth);
    void display() const;
    string getName() const;
    int getDefenceStrength() const;
    int getArmorHealth() const;
    void setName(string name);
    void setDefenceStrength(int defenceStrength);
    void setArmorHealth(int armorHealth);
    void takeHit(int damage);
private:
    string name;
    int defenceStrength;
    int armorHealth;
};

#endif /* Armor_h */
