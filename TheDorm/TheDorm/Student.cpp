//
//  Student.cpp
//  TheDorm
//
//  Created by Batyr Rasulov on 2/28/23.
//
#include <iostream>
#include "Student.h"

using namespace std;

Student::Student() {
    major = name = homeTown = temp = " ";
}
Student::Student(string n, string h, string m) {
    name = n; homeTown = n; major = m;
    myFile.open("names.txt", ios::app);
    myFile << n << endl;
    myFile << h << endl;
    myFile << m << endl << endl;
    myFile.close();
}
void Student::show() {
    myFile.open("names.txt");
    while(getline(myFile, temp)) {
        cout << temp << endl;
    }
    myFile.close();
}
void Student::setName(string n, string ht, string m) {
    name = n; homeTown = ht; major = m;
}
ostream & operator << (ostream &out, const Student& c) {
    out << c.name << endl << c.homeTown << endl << c.major << endl;
    return out;
}
