#include <iostream>
#include <string>

using namespace std;

struct Animal {
    string name;
    string species;
    string nickname;
};

void fillAnimalData(Animal& animal) {
    cout << "Enter animal details:" << endl;
    cout << "Name: ";
    getline(cin, animal.name);
    cout << "Species: ";
    getline(cin, animal.species);
    cout << "Nickname: ";
    getline(cin, animal.nickname);
}

void displayAnimal(const Animal& animal) {
    cout << "Animal details:" << endl;
    cout << "Name: " << animal.name << endl;
    cout << "Species: " << animal.species << endl;
    cout << "Nickname: " << animal.nickname << endl;
}

void makeSound(const Animal& animal) {
    cout << "The " << animal.species << " named " << animal.nickname << " makes a sound." << endl;
}

int main() {
    Animal animal;

    fillAnimalData(animal);
    displayAnimal(animal);
    makeSound(animal);

    return 0;
}
