#include<string>
#include<iostream>

using namespace std;

int stringlen(string str){
    int length = 0;
    int vowel = 0;
    int cos = 0;
    for(int i=0; str[i] != '\0'; i++){
        length++;
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            vowel++;
        }
        else{
            cos++;
        }
}
cout<<"The string length is "<<length<<endl;
cout<<"The number of vowels in the string are "<<vowel<<endl;
cout<<"The number of consonants in the string are "<<cos<<endl;
}
