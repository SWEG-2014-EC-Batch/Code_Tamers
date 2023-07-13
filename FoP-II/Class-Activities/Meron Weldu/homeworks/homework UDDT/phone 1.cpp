#include <iostream>
#include <string>
using namespace std;

struct phone {
    int areaCode;
    int exchange;
    int number;
};

int main() {
   
    phone phoneNumber1 = {212, 767, 8900};

    
    phone phoneNumber2;
    cout << "Enter an area code: ";
    cin >> phoneNumber2.areaCode;
    cout << "Enter an exchange: ";
    cin >> phoneNumber2.exchange;
    cout << "Enter a number: ";
    cin >> phoneNumber2.number;

   
    cout << "Phone number 1: (" << phoneNumber1.areaCode << ") " << phoneNumber1.exchange << "-" << phoneNumber1.number << endl;
    cout << "Phone number 2: (" << phoneNumber2.areaCode << ") " << phoneNumber2.exchange << "-" << phoneNumber2.number << endl;

    return 0;
}
