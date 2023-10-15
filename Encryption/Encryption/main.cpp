#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

string encrypt(string word, int key) {
    string encryptMsg = " ";
    for (int i = 0; i < word.length(); i++) {
        if(isupper(word[i]))
            encryptMsg += char(int((word[i] + 32) + key - 97) % 26 +97);
        else
            encryptMsg += char(int(word[i] + key - 97) % 26 + 97);
    }
    return encryptMsg;
}
int main() {
    int key;
    string message, original;
    vector <string> words;
    cout << "Enter the key: ";
    cin >> key;
    cout << "Enter the words to encrypt, end \"quit\" to quit: ";
    while(true) {
        cin >> original;
        if(original == "quit")
            break;
        words.push_back(original);
    }
    for (int i = 0; i < words.size(); i++) {
        message = encrypt(words[i], key);
        cout << right << setw(10) << words[i];
        cout << right << setw(10) << message;
        cout << "\n";
    }
    return 0;
}
