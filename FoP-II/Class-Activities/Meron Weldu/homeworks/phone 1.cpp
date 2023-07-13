#include <iostream>
#include <string>
using namespace std;

struct phone {
    int areaCode;
    int exchange;
    int number;
};

int main() {

    phone phoneNumber1;
    cout << "Enter an area code: ";
    cin >> phoneNumber1.areaCode;
    cout << "Enter an exchange: ";
    cin >> phoneNumber1.exchange;
    cout << "Enter a number: ";
    cin >> phoneNumber1.number;

    cout << "Phone number : (" << phoneNumber1.areaCode << ") " << phoneNumber1.exchange << "-" << phoneNumber1.number << endl;


    return 0;
}

