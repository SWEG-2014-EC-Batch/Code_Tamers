//a c++ program that reverse a string from user defined header file and user defined function
#include <iostream>
#include "matiString.h"
using namespace std;


int main() {
    string msg;
    cout<<"Enter any message you want to print:\n-> ";
    getline(cin, msg);
    cout<<"The reversed string is:\n-> ";
    reverse(msg);
}
