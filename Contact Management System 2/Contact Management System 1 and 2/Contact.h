//
//  Contact.h
//  Contact Management System 1 and 2
//
//  Created by Batyr Rasulov on 3/5/23.
//
#ifndef CONTACT_H
#define CONTACT_H
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
//declare a class Contact
class Contact {
    //public instance variables
public:
    //default constructor
    Contact();
    void addContact();
    void searchById();
    void searchByName();
    void displayAllContacts();
    void saveContactsToFile();
private:
    //grouped list of variables
    struct ContactInfo {
        std::string firstName;
        std::string lastName;
        std::string streetAddress;
        std::string city;
        std::string state;
        std::string zipCode;
        std::string phoneNumber;
    };
    std::vector<ContactInfo> contacts;
    int nextId;
    void loadContactsFromFile();
    void displayContact(ContactInfo contact);
};

#endif
