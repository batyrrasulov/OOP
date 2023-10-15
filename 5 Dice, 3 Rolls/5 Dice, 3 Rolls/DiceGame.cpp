//
//  DiceGame.cpp
//  5 Dice, 3 Rolls
//
//  Created by Batyr Rasulov on 2/11/23.
//
#include "DiceGame.hpp"
#include "main.cpp"

using namespace std;

class Player {
private:
    //variable name
    //parameter type string
    string name;
    Die* dice;
    int total;
public:
    Player(string n,int dc,int face) {
        name = n;
        total = dc;
        dice = new Die[dc];
        for (int i = 0; i < dc; i++) {
            Die d(face);
            dice[i] = d;
        }
    }
    //method rolls all of the die in the instance variable array dice
    void roll(){
        //roll each dice
        for (int i = 0; i < total; i++) {
            dice[i].rollDice();
        }
    }
    //method displays the values of each of the dice in the instance variable dice
    //output is formatted as shown in the UML Diagram
    void showRoll() {
        //roll each dice
        cout << "DICE" << endl;
        for (int i = 1; i <= total; i++) {
            cout << i << " ";
        }
        cout<<endl;
        for (int i = 1; i <= total; i++) {
            cout<<"----";
        }
        cout<<endl;
        for (int i = 0; i < total; i++) {
            cout << dice[i].value() << " ";
        }
        cout << endl;
        cout << "TOTAL : " << getTotal();
    }
    //method returns the total of the die values in the instance variable dice
    int getTotal() {
        int totalCount = 0;
        for (int i = 0; i < total; i++) {
            totalCount += dice[i].value();
        }
        return totalCount;
    }
    //method takes an integer that corresponds to a valid index in the instance variable array dice and rolls the indicated die
    void reRoll(int index) {
        index--;
        if (index >= 0 && index < total) {
            dice[index].rollDice();
        } else {
            cout << "Error Index if out of bound" << endl;
        }
    }
};
//shows the results of the dice roll
//including the value of each die and the total of the roll
int main() {
    int diceCount;
    int face;
    string name;
    cout << "Enter name of the player: ";
    cin >> name;
    cout << "Enter number of dice : ";
    cin >> diceCount;
    cout << "Enter face count for the dice : ";
    cin >> face;
    Player player(name,diceCount,face);
    player.roll();
    player.showRoll();
    while(true) {
        //asked how many die they wish to re-roll
        cout << "\nhow many dice do you want to re roll ? ";
        int reRollCount;
        //enters the number to re-roll
        cin >> reRollCount;
        if (reRollCount == 0) {
            break;
        }
        //player is prompted to indicate each of the die to re-rol
        int diceIndex;
        for (int i = 1; i <= reRollCount; i++) {
            cout << "Which dice to re roll ? ";
            cin >> diceIndex;
            player.reRoll(diceIndex);
        }
        //new results are shown including of each die and total
        player.showRoll();
    }
    return 0;
}
