//a c++ program that uses user defined header file and user defined function to convert uppercase to lower case
#include <iostream>
#include "matiString.h"
using namespace std;

int main() {
    string group;
    cout<<"Enter you group name:\n";
    getline(cin, group);
    cout<<"\nWhen you group name changed to lowercase it is going to be:\n";
    lower(group);
    cout<<"\nWhen your group name changed to uppercase it is going to be:\n";
    upper(group);
}
