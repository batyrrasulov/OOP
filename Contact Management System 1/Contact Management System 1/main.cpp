//
//  main.cpp
//  Contact Management System 1
//
//  Created by Batyr Rasulov on 3/4/23.
//
#include "Contact.h"
#include <iostream>
#include <vector>
#include <fstream>

int main() {
    //create Contact object using parameterized constructor
    Contact c1("Mohammed", "Mahmoodov", "Khalifa", "3300 W Camelback Rd", "Phoenix", "AZ", "85017-3030", "+1(623)296-7917");
    //show contact information details
    c1.showContact();
    cout << endl;
    //create Contact object using default constructor
    Contact c2;
    Contact c3;
    //test the overloaded input and output operators
    cin >> c2;
    cout << endl;
    cout << c2;
    // Declare an instance of ofstream class
    ofstream file;
    // Open a file in write mode
    file.open("contacts.txt");
    // Add the contact information to the file
    file << c1 << c2;
    // Close the file
    file.close();
    return 0;
}
