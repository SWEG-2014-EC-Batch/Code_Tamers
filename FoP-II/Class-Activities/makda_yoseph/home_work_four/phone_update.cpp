#include <iostream>
#include <iomanip>
#include <string>

struct PhoneNumber {
    int areaCode;
    int exchange;
    int number;
};

struct Contact {
    std::string name;
    PhoneNumber phoneNumber;
};

void inputContacts(Contact contacts[], int& numContacts);
void displayContacts(const Contact contacts[], int numContacts);

int main() {
    int numContacts;
    Contact contacts[10];

    inputContacts(contacts, numContacts);
    displayContacts(contacts, numContacts);

    return 0;
}

void inputContacts(Contact contacts[], int& numContacts) {
    std::cout << "Enter the number of contacts you want to add: ";
    std::cin >> numContacts;

    std::cout << "Enter the contact details:\n";
    for (int i = 0; i < numContacts; ++i) {
        std::cout << "Name " << i + 1 << ": ";
        std::cin >> contacts[i].name;

        std::cout << "Phone Number:\n";
        std::cout << std::setw(10) << "Area Code: ";
        std
