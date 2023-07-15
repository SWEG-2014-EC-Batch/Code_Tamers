#include <iostream>
#include <string>
using namespace std;

struct phone {
    int areaCode;
    int exchange;
    int number;
};

struct person {
    string name;
    phone phoneNumber;
};

int main() {
    const int NUM_PERSONS = 10;
    person persons[NUM_PERSONS];

 
    for (int i = 0; i < NUM_PERSONS; i++) {
        cout << "Enter the name of person " << i + 1 << ": ";
        getline(cin, persons[i].name);
        cout << "Enter the area code for person " << i + 1 << ": ";
        cin >> persons[i].phoneNumber.areaCode;
        cout << "Enter the exchange for person " << i + 1 << ": ";
        cin >> persons[i].phoneNumber.exchange;
        cout << "Enter the number for person " << i + 1 << ": ";
        cin >> persons[i].phoneNumber.number;
        cin.ignore();
    }

    for (int i = 0; i < NUM_PERSONS; i++) {
        cout << "Person " << i + 1 << ": " << persons[i].name << endl;
        cout << "Phone number: (" << persons[i].phoneNumber.areaCode << ") "
             << persons[i].phoneNumber.exchange << "-" << persons[i].phoneNumber.number << endl;
    }

    return 0;
}

