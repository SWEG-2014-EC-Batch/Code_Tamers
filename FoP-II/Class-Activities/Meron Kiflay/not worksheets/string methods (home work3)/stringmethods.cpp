#include <iostream>
#include <string>
#include "stringmethods.h"
using namespace std;

int main()
{
    char str1[50];
    //for the first function.
    int s_l,s_vl,s_cl;
    cout<<"enter your string: ";
    gets(str1);
    strLen(str1,s_l,s_vl,s_cl);
    cout<<"the length of the string is: "<<s_l<<endl<<"it has "<<s_vl<<" vowels and "<<s_cl<<" consonants."<<endl;

    //for the second fuction
    string str2=str1;
    cout<<"the reverse of the string is: "<<rev(str2);
    cout<<endl<<endl;

    //for the second function
    string str3,str4;
    cout<<"enter your first string: ";
    getline(cin,str3);
    cout<<"enter your second string: ";
    getline(cin,str4);

    int x=compare(str3,str4);
      if(x==0){cout<<"they are equal.";}
      else if (x==1){cout<<"the first string is longer.";}
      else{cout<<"the second string is longer.";}
    cout<<endl<<endl;

   //for last two functions
    string str5;
    cout<<"enter the the string you want to convert: ";
    getline(cin,str5);

    char choice;
    cout<<"what do you want to convert it to:\nl=to lower case\nu=to upper case.";
    cout<<endl;
    cin>>choice;
      if(choice=='l'){cout<<"the lower case conversion is: "<<lower(str5);}
      else if(choice=='u'){cout<<"the upper case conversion is: "<<upper(str5);}

}
