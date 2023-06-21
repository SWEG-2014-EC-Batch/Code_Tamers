
#include <iostream>
#include "matiString.h"
using namespace std;

int main() {
    string msg1, msg2;
    cout<<"Enter two messages to be compared: \n";
    getline(cin, msg1);
    getline(cin, msg2);
    cout<<"When comparing the two strings: "<<compare(msg1, msg2);
}
