//
//  Hut.cpp
//  Fantasy Fighting Game
//
//  Created by Batyr Rasulov on 7/22/23.
//

#include "Hut.h"

Hut::Hut(Adventurer* w) {
    guy = w;
}
//populate weapons
Hut::Hut() {
    weapons.push_back(Weapon("Stick", 20));
    weapons.push_back(Weapon("Hammer", 30));
    weapons.push_back(Weapon("Bow", 40));
    weapons.push_back(Weapon("Sword", 50));
}
//show the name, damage, number and price for weapons and coconuts
void Hut::display() {
    cout << "Welcome to the Hut!" << endl;
    cout << "Here are the available weapons: " << endl;
    for (int i = 0; i < weapons.size(); i++) {
        cout << (i + 1) << ") " << weapons[i].getWeaponName() << " - " <<
        weapons[i].getWeaponDamage() << " damage - " << weaponPrices[i] << " coins" << endl;
    }
    cout << "Here are the available coconuts: " << endl;
    for (int i = 0; i < 4; i++) {
        cout << (i + 1) << ") " << coconuts[i] << " - +" << (i + 1) * 10 << " health - " <<
        coconutPrices[i] << " coins" << endl;
    }
}
bool Hut::buyWeapon(int choice, Adventurer* shopper) {
    //-1 because starts at 0
    int price = weaponPrices[choice - 1];
    if (shopper->getCoins() < price) {
        cout << "Youd don't have enough coins to buy that." << endl;
        return false;
    }
    //change coins
    shopper->setCoins(shopper->getCoins() - price);
    //change weapon
    shopper->setCurrentWeapon(weapons[choice - 1]);
    cout << "You bought a " << weapons[choice - 1].getWeaponName() << " for " << price <<
    "coins." << endl;
    return true;
}
bool Hut::buyCoconut(int choice, Adventurer* shopper) {
    if (choice < 1 || choice > 4) {
        cout << "Invalid choice." << endl;
        return false;
    }
    int price = coconutPrices[choice - 1];
    if (shopper->getCoins() < price) {
        cout << "You don't have enough coinst to buy that." << endl;
        return false;
    }
    shopper->setCoins(shopper->getCoins() - price);
    shopper->setHealth(shopper->getHealth() + (choice * 10));
    cout << "You bought a " << coconuts[choice - 1] << " for " << price << " coins." << endl;
    return true;
}
