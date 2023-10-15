//
//  main.cpp
//  LotteryPicker
//
//  Created by Batyr Rasulov on 1/19/23.
//  This is my own work.
//

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;
bool checkVal();
vector <int> getNumbers();
void setPowerball(vector<int>& numbers);
void showNumbers(vector<int> numbers);

int main() {
    srand(time_t(0));
    int times;
    string ans;
    // Asks the user how many numbers they would like to see
    do {
        cout << "How many lottery numbers would you like to see?" << endl;
        cin >> times;
        for (int i = 0; i < times; i++) {
            vector <int> numbers = getNumbers();
            setPowerball(numbers);
            showNumbers(numbers);
        }
        // Offers the user a chance if they would like to see new numbers
        cout << "Would you like to see new numbers? (y/n)" << endl;
        cin >> ans;
    } while (ans != "n");
}
// Displays or shows the numbers in the vector
void showNumbers(vector<int> numbers) {
    cout << "Your numbers are: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i];
        if (i < 4)
            cout << "-";
    }
    cout << " Powerball " << numbers[5];
    cout << endl;
}
// Makes sure there are no repeat or duplicate numbers
bool checkVal(vector<int> numbers, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (numbers[i] == value) {
            return true;
        }
    }
    return false;
}
//Selects 1 number in the range 1-26
void setPowerball(vector<int>& numbers) {
    for (int i = 5; i < 6; i++) {
        int last = rand() % 26 + 1;
        // Generates the number and adds it as the last element in the vector
        if (checkVal(numbers, i ,last)) {
            i--;
        }
        else {
            numbers.push_back(last);
        }
    }
}
// Selects 5 numbers in the range 1-69
vector<int> getNumbers() {
    vector<int> numbers;
    for (int i = 0; i < 5; i++) {
        int num = rand() % 69 + 1;
        if(checkVal(numbers, i, num)) {
            i--;
        }
        else {
            numbers.push_back(num);
        }
    }
    sort(numbers.begin(), numbers.end());
    // Consequently the vector of lottery numbers is returned
    return numbers;
}

