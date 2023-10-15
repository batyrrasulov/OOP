//
//  main.cpp
//  Topic3LabQuestion1
//
//  Created by Batyr Rasulov on 2/16/23.
//
#include <iostream>
#include "Armor.h"
#include "Player.h"

using namespace std;

int main() {
    //create a new Armor object and set its properties
    Armor armor("Diamaond", 10, 100);
    cout << "Armor name: " << armor.getName() << endl;
    cout << "Armor defence: " << armor.getDefenceStrength() << endl;
    //create a new Player object and set its properties
    Player player("Steve", 10, armor);
    cout << "Player name: " << player.getName() << endl;
    cout << "Player health" << player.getHp() << endl;
    //display the Player's Armor stats
    player.showArmor();
}
