//a function that accepts a string value and then filter the vowels
#include <iostream>
using namespace std;

void vowel(string &msg);

int main() {
    string msg;
    cout<<"Enter any message:\n=>";
    getline(cin, msg);
    vowel(msg);
}

void vowel(string &msg) {
    string vowel, consonanat;
    cout<<"When the vowels are filtered:\n";
    for (int i=0;i<(sizeof(msg)/sizeof(msg[0]));++i) {
        if(msg[i]=='a' || msg[i]=='e' || msg[i]=='i' || msg[i]=='o' || msg[i]=='u' || msg[i]=='A' || msg[i]=='E' || msg[i]=='I' || msg[i]=='O' || msg[i]=='U')
            vowel += msg[i];
        else
            consonanat += msg[i];
    }
    cout<<vowel;
}
