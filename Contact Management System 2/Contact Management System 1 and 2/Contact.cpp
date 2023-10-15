//
//  Contact.cpp
//  Contact Management System 1 and 2
//
//  Created by Batyr Rasulov on 3/5/23.
//
#include "Contact.h"
//string stream included
#include <sstream>
#include <vector>

Contact::Contact() {
    nextId = 1;
    //test out the Contact class by loading contacts from the provided file
    loadContactsFromFile();
}
//prompts the user for a new contact data, creates an object and the contact to "contacts" list
void Contact::addContact() {
    std::cout << "Enter first name: ";
    std::string firstName;
    std::cin >> firstName;
    std::cout << "Enter last name: ";
    std::string lastName;
    std::cin >> lastName;
    std::cout << "Enter street address: ";
    std::string streetAddress;
    std::cin.ignore();
    std::getline(std::cin, streetAddress);
    std::cout << "Enter city: ";
    std::string city;
    std::getline(std::cin, city);
    std::cout << "Enter state: ";
    std::string state;
    std::getline(std::cin, state);
    std::cout << "Enter zip code: ";
    std::string zipCode;
    std::getline(std::cin, zipCode);
    std::cout << "Enter phone number: ";
    std::string phoneNumber;
    std::getline(std::cin, phoneNumber);
    ContactInfo newContact = {
        firstName,
        lastName,
        streetAddress,
        city,
        state,
        zipCode,
        phoneNumber
    };
    contacts.push_back(newContact);
    std::cout << "Contact added with ID: " << nextId << std::endl;
    nextId++;
}
//the getContact() method that takes an integer Id and searches contacts to find a Contact with a matching to inputted user's identifier
void Contact::searchById() {
    std::cout << "Enter ID to search for: ";
    int id;
    std::cin >> id;
    bool found = false;
    for (auto& contact : contacts) {
        if (id == nextId) {
            displayContact(contact);
            found = true;
            break;
        }
    }
    //no matching contact is found returns this statement
    if (!found) {
        std::cout << "Contact not found with ID: " << id << std::endl;
    }
}
//getContacts() takes a string last name and searches the contacts to find all Contact objects with a matching last name and the function returns a vector of all matching Contact objects
void Contact::searchByName() {
    std::cout << "Enter last name to search for: ";
    std::string lastName;
    std::cin >> lastName;
    bool found = false;
    for (auto contact : contacts) {
        if (contact.lastName == lastName) {
            displayContact(contact);
            found = true;
        }
    }
    if (!found) {
        std::cout << "Contact not found with last name: " << lastName << std::endl;
    }
}
//displays the contacts in a formatted output
void Contact::displayAllContacts() {
    for (auto contact : contacts) {
        displayContact(contact);
    }
}
//writes all of the contact data to the output source out
void Contact::saveContactsToFile() {
    std::ofstream outFile;
        outFile.open("/Users/batyrrasulov/Library/Mobile Documents/com~apple~CloudDocs/Contact Management System 2/Contact Management System 1 and 2/contacts.txt");
    if (outFile.is_open()) {
        for (auto contact : contacts) {
            outFile << contact.firstName << "," << contact.lastName << "," <<
            contact.streetAddress << "," << contact.city << "," << contact.state << "," <<
            contact.zipCode << "," << contact.phoneNumber << std::endl;
        }
        std::cout << "Contacts saved to file." << std::endl;
    } else {
        std::cout << "Unable to save contacts to file." << std::endl;
    }
    outFile.close();
}
//method to load all contacts from file
void Contact::loadContactsFromFile() {
    std::ifstream inFile;
    inFile.open("/Users/batyrrasulov/Library/Mobile Documents/com~apple~CloudDocs/Contact Management System 2/Contact Management System 1 and 2/contacts.txt");
    if (inFile.is_open()) {
        std::string line;
        while (std::getline(inFile, line)) {
            std::istringstream ss(line);
            std::string firstName, lastName, streetAddress, city, state, zipCode, phoneNumber;
            std::getline(ss, firstName, ',');
            std::getline(ss, lastName, ',');
            std::getline(ss, streetAddress, ',');
            std::getline(ss, city, ',');
            std::getline(ss, state, ',');
            std::getline(ss, zipCode, ',');
            std::getline(ss, phoneNumber, ',');
            ContactInfo contact = {
                firstName,
                lastName,
                streetAddress,
                city,
                state,
                zipCode,
                phoneNumber
            };
            contacts.push_back(contact);
            nextId++;
        }
        std::cout << "Contacts loaded from file." << std::endl;
    } else {
        std::cout << "Unable to open contacts file." << std::endl;
    }
    inFile.close();
}
//method to display the contacts
void Contact::displayContact(ContactInfo contact) {
        std::cout << nextId-1 << std::endl;
        std::cout << contact.firstName << " " << contact.lastName << std::endl;
        std::cout << contact.streetAddress << std::endl;
        std::cout << contact.city << ", " << contact.state << " " << contact.zipCode << std::endl;
        std::cout << contact.phoneNumber << std::endl;
    }
