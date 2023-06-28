//user defined function building
#include <iostream>
#include "matiString.h"
using namespace std;

int main() {
    string letter, fullname;
    cout<<"Enter any word: ";
    getline(cin, letter);
    cout<<"The length of the word is: "<<len(letter);

    cout<<"\nThe number of vowel is: "<<vowel(letter);
    cout<<"\nThe number of consonant is: "<<consonant(letter);
    
    return 0;
}

