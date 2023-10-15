//
//  Name.h
//  Contact Management System 1
//
//  Created by Batyr Rasulov on 3/4/23.
//
#include <iostream>
#ifndef Name_h
#define Name_h

using namespace std;

//create a class named Name
class Name {
public:
    //public instance variables
    string first_name, last_name, middle_name;
    //default constructor
    Name() {
        //initialize instance variables with an empty strings
        first_name = " ";
        last_name = " ";
        middle_name = " ";
    }
    //parameterized constructor
    Name(string first_name, string last_name, string middle_name) {
        //initialize instance variables to the given parameters
        this->first_name = first_name;
        this->last_name = last_name;
        this->middle_name = middle_name;
    }
    //copy constructor
    Name(const Name &n) {
        first_name = n.first_name;
        last_name = n.last_name;
        middle_name = n.middle_name;
    }
    //getters for the all instance variables
    string getFirst_Name() {
        return first_name;
    }
    string getLast_Name() {
        return last_name;
    }
    string getMiddle_Name() {
        return middle_name;
    }
    //setters for the all instance variables
    void setFirst_Name(string first_name) {
        this->first_name = first_name;
    }
    void setLast_Name(string last_name) {
        this->last_name = last_name;
    }
    void setMiddle_Name(string middle_name) {
        this->middle_name = middle_name;
    }
    //method to display the name
    void showName() {
        cout << last_name << ", " << first_name << " " << middle_name[0] << "." << endl;
    }
    //declare the overloaded input and output operators
    friend ostream &operator << (ostream &out, const Name &n);
    friend istream &operator >> (istream &in, const Name &n);
};
//define the overloaded ouput operator
ostream &operator << (ostream &out, const Name &n) {
    out << n.last_name << ", " << n.first_name << " " << n.middle_name[0] << "." << endl;
    return out;
}
//define the overloaded input operator
istream &operator >> (istream &in, Name &n) {
    cout << "Enter the first name: ";
    getline(in, n.first_name);
    cout << "Enter the last name: ";
    getline(in, n.last_name);
    cout << "Enter the middle name: ";
    getline(in, n.middle_name);
    return in;
}

#endif /* Name_h */

