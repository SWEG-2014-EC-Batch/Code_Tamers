#include<iostream>
#include<cstring>
using namespace std;
string vowel(string word,int len){
    string vowel;
    for(int i=0; i<len; i++){
        if( word[i] == 'a' || word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U')
{
                vowel += word[i];
}    }
return vowel;
}
int main(){
    string word;
    cout<<"Input any word: ";
    cin>>word;
    int len = word.size();
    cout<<"The vowels in the word are "<<vowel(word, len);

}
