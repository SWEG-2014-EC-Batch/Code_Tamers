#include <iostream>
using namespace std;

//the function that measure the length of string
int len(string word) {
    int i=0, counter=0, vowel=0, consonant=0;
    while((word[i]>='a' && word[i]<='z')||(word[i]>='A' && word[i]<='Z') || (word[i] ==' ') || (word[i]>='0' && word[i]<='9')) {
        counter++;
        i++;
    }
    return counter;
}

//the function that count the number of vowel
int vowel(string word) {
    int i=0, vowelC=0;
    while((word[i]>='a' && word[i]<='z')||(word[i]>='A' && word[i]<='Z') || (word[i] ==' ') || (word[i]>='0' && word[i]<='9')) {
        if(word[i]=='a' || word[i]=='i' || word[i]=='e' || word[i]=='o' || word[i]=='u' || word[i]=='A' || word[i]=='E' || word[i]=='O' || word[i]=='I' || word[i]=='U')
            vowelC++;
        i++;
    }
    return vowelC;
}

//the function that count the number of consonants
int consonant(string word) {
    int i=0, consonantC=0;
    while((word[i]>='a' && word[i]<='z')||(word[i]>='A' && word[i]<='Z') || (word[i] ==' ') || (word[i]>='0' && word[i]<='9')) {
        if(word[i]=='a' || word[i]=='i' || word[i]=='e' || word[i]=='o' || word[i]=='u' || word[i]=='A' || word[i]=='E' || word[i]=='O' || word[i]=='I' || word[i]=='U')
            consonantC=consonantC;
        else
            consonantC++;
        i++;
    }
    return consonantC;
}

//The function that reverse the string
void reverse(string str) {
    int n = len(str);
    for (int i=n;i>=0;--i) {
        cout<<str[i];
    }
}

//The function that convert a string to lowercase
void lower(string word) {
    int k = len(word);
    for(int j=0;j<k;++j) {
        if(word[j]>='A' && word[j]<='Z') {
            int let = int(word[j]) - 65;
            let += 97;
            word[j] = char(let);
        }
    }
    cout<<word;
}

//The function that convert a string to upercase
void upper(string word) {
    int k = len(word);
    for(int j=0;j<k;++j) {
        if(word[j]>='a' && word[j]<='z') {
            int let = int(word[j]) - 97;
            let += 65;
            word[j] = char(let);
        }
    }
    cout<<word;
}
