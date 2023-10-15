//
//  Dorm.cpp
//  TheDorm
//
//  Created by Batyr Rasulov on 2/28/23.
//
#include <iostream>
#include "Dorm.h"

using namespace std;

Dorm::Dorm() {
    Student name;
    setStudent();
}
Dorm::Dorm(string n, string hT, string m) {
    major = m;
    setStudent();
}
void Dorm::getStudent() {
    for (int i = 0; i < rooms.size(); i++) {
        cout << rooms[i];
    }
}
void Dorm::setStudent() {
    int numb, count = 0;
    string n, h, m = " ";
    cout << "how many students ";
    cin >> numb;
    cin.ignore(1, '\n');
    for (int i = 0; i < numb; i++) {
        cout << ++count << " - ";
        cout << endl << "Enter student name ";
        getline(cin, n);
        cout << endl << "Enter student home town ";
        getline(cin, h);
        cout << endl << "Major ";
        getline(cin, m);
        rooms.push_back(Student(n, h, m));
    }
    getStudent();
    }
