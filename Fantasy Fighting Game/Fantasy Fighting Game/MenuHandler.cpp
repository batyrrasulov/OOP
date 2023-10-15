//
//  MenuHandler.cpp
//  Fantasy Fighting Game
//
//  Created by Batyr Rasulov on 7/22/23.
//

#include "MenuHandler.h"

void MenuHandler::startMenu() {
    string characterName;
    cout << "Welcome to the Fantasy Fighting Game!" << endl;
    cout << "To start, please tell us your name." << endl;
    cin >> characterName;
    //take the input and set is as name
    mainCharacter->setName(characterName);
    cout << "Got it. Thank you, " << mainCharacter->getName() << "." << endl;
    //set stating health and coins
    mainCharacter->setHealth(100);
    mainCharacter->setCoins(100);
    menu1();
}
//options after the initialization
void MenuHandler::menu1() {
    Load load(mainCharacter, badMain);
    Island fightingPlace(mainCharacter, badMain);
    int decision;
    cout << "What would you like to do?" << endl;
    cout << "1. Fight" << endl;
    cout << "2. Show current stats" << endl;
    cout << "3. Save the progress" << endl;
    cout << "4. End the game" << endl;
    cin >> decision;
    cout << endl;
    switch (decision) {
        case 1:
            fightingPlace.fight();
            break;
        case 2:
            mainCharacter->showStats();
            menu1();
            break;
        case 3:
            load.saveProgress();
            menu1();
            break;
        case 4:
            cout << "Thanks for playing!" << endl;
            delete mainCharacter;
            delete badMain;
            return;
        default:
            cout << "Invalid choice." << endl;
            break;
    }
}
