#include<iostream>
#include<string>
string toUpper(string str){
    string result = "";
    for(int i=0; i< str.size(); i++){
        if(str[i]>='a' && str[i]<='z'){
            result += str[i] - 'a' + 'A';
        }
        else{
            result+= str[i];
        }
    }
    cout<<result;
}
