//
//  Island.cpp
//  Fantasy Fighting Game
//
//  Created by Batyr Rasulov on 7/22/23.
//

#include "Island.h"
#include "Load.h"

Island::Island(Adventurer* e, Enemy* b) {
    slayer = e;
    badGuy = b;
}
void Island::fight() {
    //initialize hits
    int numHits = 0;
    //determine type based off the number of kills and then change every 3
    if (getNumKills() <= 3) {
        badGuy->setType("Crab");
    }
    else if (getNumKills() > 3 && numKills <= 6) {
        badGuy->setType("Scorpian");
    }
    else if (getNumKills() > 6 && numKills <= 9) {
        badGuy->setType("Monkey");
    }
    else {
        //win
        cout << "Woah, Congratulations! You defeated all of the enemies and won the game!" << endl;
        return;
    }
    // call the method function to determine if a natural event occurs during the fight
    naturalProb();
    cout << "You are fighting a " << badGuy->getType() << "!" << endl;
    //fight while both are alive
    while (slayer->getHealth() > 0 && badGuy->getEnemyHealth() > 0) {
        //hit enemy
        slayer->getHit(badGuy->attack());
        //hit adventurer
        slayer->useWeapon(badGuy);
        //track hits
        numHits++;
    }
    //if dead show health for both and menu
    if (slayer->getHealth() <= 0) {
        slayer->show();
        badGuy->showEnemy();
        deadMenu1();
    }
    //if adventurer kills
    else if (badGuy->getEnemyHealth() <= 0) {
        slayer->show();
        cout << "You killed the " << badGuy->getType() << " in " << numHits << " hits." << endl;
        setNumKills(getNumKills());
        //track the number of kills
        numKills++;
        cout << "Number of kills: " << getNumKills() << endl;
        //more coins less hits
        slayer->setCoins(slayer->getCoins() + (100/numHits));
        //enemy gets stronger the more kills
        badGuy->setEnemyDamage(badGuy->attack() + (numKills * 2));
        //enemy gets more health the more kills
        badGuy->setEnemyHealth(100 + (numKills * 10));
        combatMenu1();
    }
}
//1 in 10 chance of getting hit by natural disaster and takes away half of the health
void Island::naturalProb() {
    int naturalValue;
    int randomChance = 1 + rand() % 10;
    if (randomChance == 2) {
        naturalValue = slayer->getHealth() / 2;
        slayer->setHealth(slayer->getHealth() - naturalValue);
        if (badGuy->getType() == "Crab") {
            cout << "You got hit by a Tidal Wave and lost half of your health!" << endl;
        }
        else if (badGuy->getType() == "Scorpian") {
            cout << "You got hit by a Sandstorm and lost half of your health!" << endl;
        }
        else if (badGuy->getType() == "Monkey") {
            cout << "You got hit by a Monsoon and lost half of your health!" << endl;
        }
    }
    else {
        naturalValue = 0;
        slayer->setHealth(slayer->getHealth() - naturalValue);
    }
}
int Island::getNumKills() {
    return numKills;
}
void Island::setNumKills(int kills) {
    numKills = kills;
}
//gives options after enemy is killed
void Island::combatMenu1() {
    Load hey(slayer, badGuy);
    cout << "What's next?" << endl;
    cout << "1. Keep fighting " << endl;
    cout << "2. Show current stats " << endl;
    cout << "3. Save the progress " << endl;
    cout << "4. Go to the Store " << endl;
    cout << "5. End the game " << endl;
    int choice;
    cin >> choice;
    cout << endl;
    switch (choice) {
        case 1:
            fight();
            break;
        case 2:
            slayer->showStats();
            combatMenu1();
            break;
        case 3:
            hey.saveProgress();
            combatMenu1();
            break;
        case 4:
            store.display();
            char pick;
            int num;
            //determine what they want to buy
            cout << "Buy a weapon or coconut (w/c)? Which one(#)?" << endl;
            cin >> pick;
            cin >> num;
            if (pick == 'w') {
                store.buyWeapon(num, slayer);
            }
            else if (pick == 'c') {
                store.buyCoconut(num, slayer);
            }
            combatMenu1();
        case 5:
            cout << "Thanks for playing!" << endl;
            return;
        default:
            cout << "Invalid choice." << endl;
            break;
    }
}
//gives options after the adventurer is killed
void Island::deadMenu1() {
    int dieChoice;
    Load bye(slayer, badGuy);
    cout << "Sucks that you died, but you can always play again!" << endl;
    cout << "Do you want to start a new game(1) or pick up from the last save point(2)?" << endl;
    cin >> dieChoice;
    if (dieChoice == 1) {
        cout << "Cool, just hit run to start a new game" << endl;
        return;
    }
    else if (dieChoice == 2) {
        bye.uploadProgress();
        combatMenu1();
    }
    else {
        cout << "Invalid selection." << endl;
        return;
    }
}
