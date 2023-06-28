#include<iostream>
#include<string>
#include "header1.h"
#include "head.h"
#include "hdd.h"
#include "haa.h"
#include "hope.h"


using namespace std;

int main(){
    char choice;
    cout<<"What operation do you wanna do, choose one:h\n";
    cout<<"A)Find the length of sting, vowels and consonants of  a given string.\nB)Reverse a string.\nC)Compare two strings.\n";
    cout<<"D)Convert string to lower case.\nE)Convert string to upper case."<<endl;
    cin>>choice;
    if(choice == 'a' || choice == 'A'){
        string str;
        cout<<"Input the string: ";
        cin>>str;
        stringlen(str);
    }
    else if(choice == 'b' || choice == 'B'){
        string str;
        cout<<"Input the string: ";
        cin>>str;
        reversed(str);
    }
    else if(choice == 'c' || choice == 'C'){
        string str1, str2;
        cout<<"Input the string 1: ";
        cin>>str1;
        cout<<"Input the string 2: ";
        cin>>str2;
        compareStr(str1, str2);
    }
    else if(choice == 'd' || choice == 'D'){
        string str;
        cout<<"Input the string: ";
        cin>>str;
        toLower(str);
    }
    else if(choice == 'e' || choice == 'E'){
        string str;
        cout<<"Input the string: ";
        cin>>str;
        toUpper(str);
    }
    return 0;
}
