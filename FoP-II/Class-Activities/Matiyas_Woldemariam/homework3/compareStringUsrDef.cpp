
#include <iostream>
#include "matiString.h"
using namespace std;

int compare(string say1, string say2);

int main() {
    string msg1, msg2;
    cout<<"Enter two messages to be compared: \n";
    getline(cin, msg1);
    getline(cin, msg2);
    cout<<"When comparing the two strings: "<<compare(msg1, msg2);
}

int compare(string say1, string say2) {
    int x, y;
    x = len(say1);
    y = len(say2);
    if(x==y) 
        return 0;
    else if(x>y)
        return 1;
    else    
        return -1;
}