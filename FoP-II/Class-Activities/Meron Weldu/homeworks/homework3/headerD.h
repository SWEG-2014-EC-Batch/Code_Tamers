#include<iostream>
#include<string>
string toLower(string str){
    string result = "";
    for(int i=0; i< str.size(); i++){
        if(str[i]>='A' && str[i]<='Z'){
            result += str[i] - 'A' + 'a';
        }
        else{
            result += str[i];
        }
    }
    cout<<result;
}
