//
//  main.cpp
//  TestRand1
//
//  Created by Batyr Rasulov on 1/19/23.
//
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int randNum;
    int guess;
    
    // Initialize the seed
    srand(time_t(NULL));
    
    // Generate a 'random' number between 1 and 10
    randNum = rand() % 10 + 1;
    
    do {
        cout << "Guess the number (1-10): " << endl;
        cin >> guess;
        if(randNum < guess) {
            cout << "Guess was too high!" << endl;
        }
        else if(randNum > guess) {
            cout << "Guess was too low!" << endl;
        }
    }
    while (randNum != guess);
    
    cout << randNum << endl;
    
    cout << "Gongratulations!";
    
    return 0;
}
