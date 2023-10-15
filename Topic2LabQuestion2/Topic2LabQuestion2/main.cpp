//
//  main.cpp
//  Topic2LabQuestion2
//
//  Created by Batyr Rasulov on 2/11/23.
//

#include <iostream>
using namespace std;

class Player {
public:
    string name;
    int hp;
    Player(string playerName, int playerHp) {
        name = playerName;
        hp = playerHp;
    }
    void setName(string playerName) {
        name = playerName;
    }
    string getName() {
        return name;
    }
    void setHp(int playerHp) {
        hp = playerHp;
    }
    int getHp() {
        return hp;
    }
    void printPlayer() {
        cout << "Player name: " << name << endl;
        cout << "Hp: " << hp << endl;
    }
};
int main() {
    Player player("L Jenkins", 100);
    player.printPlayer();
    player.setName("GailForceWinds");
    player.setHp(50);
    std::printf("| %s hp: %d |\n", player.getName().c_str(), player.getHp());
    return 0;
}
