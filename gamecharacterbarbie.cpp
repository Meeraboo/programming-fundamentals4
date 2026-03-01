#include <iostream>
#include <string>
using namespace std;

struct Barbie {
    string name;
    string hairColor;
    string outfit;
};

Barbie createCharacter() {
    Barbie b;

    cout << "Enter Barbie's name: ";
    getline(cin, b.name);

    cout << "Choose hair color (blonde, brown, black, pink): ";
    getline(cin, b.hairColor);

    cout << "Choose outfit (casual, party, sporty, princess): ";
    getline(cin, b.outfit);

    return b;
}

void displayCharacter(const Barbie &b) {
    cout << "\n=== Your Barbie Character ===" << endl;
    cout << "Name: " << b.name << endl;
    cout << "Hair Color: " << b.hairColor << endl;
    cout << "Outfit: " << b.outfit << endl;
}

int main() {
 Barbie myBarbie=createCharacter(); //create character first
displayCharacter(myBarbie);
//then display it
return 0;
    }