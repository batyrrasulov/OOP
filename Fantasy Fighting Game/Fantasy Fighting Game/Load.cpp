//
//  Load.cpp
//  Fantasy Fighting Game
//
//  Created by Batyr Rasulov on 7/22/23.
//

#include "Load.h"

void Load::saveProgress() {
    deleteOldStats();
    ofstream outFile("saveFile.txt");
    //while open input all current stats
    if (outFile.is_open()) {
        outFile << slayerSave->getName() << endl;
        outFile << slayerSave->getHealth() << endl;
        outFile << slayerSave->getCoins() << endl;
        outFile << slayerSave->getCurrentWeapon().getWeaponName() << endl;
        outFile << slayerSave->getCurrentWeapon().getWeaponDamage() << endl;
        outFile << saver.getNumKills() << endl;
        outFile.close();
        cout << "Progress saved!" << endl;
    }
    else {
        cout << "Error saving the progress..." << endl;
    }
}
//read the file and update all the stats
void Load::uploadProgress() {
    ifstream inFile("saveFile.txt");
    string name, weaponName;
    int health, coins, weaponDamage, numKills;
    if (inFile.is_open()) {
        inFile >> name >> health >> coins >> weaponName >> weaponDamage >> numKills;
        slayerSave->setName(name);
        slayerSave->setHealth(health);
        slayerSave->setCoins(coins);
        slayerSave->setCurrentWeapon(Weapon(weaponName, weaponDamage));
        saver.setNumKills(numKills);
        cout << "Progress loaded successfully!" << endl;
    } else {
        cout << "Error uploading the progress..." << endl;
    }
}
//clear the file with trunc
void Load::deleteOldStats() {
    ofstream outFile("saveFile.txt", ios::trunc);
    outFile.close();
}
