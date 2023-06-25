#include<iostream>
#include<string>
int compareStr(string str1, string str2){
    if(str1.size() == str2.size()){
        cout<<"0 : They are equal"<<endl;
    }
    else if(str1.size() > str2.size()){
        cout<<"1 : String 1 is greater"<<endl;
    }
    else{
        cout<<"-1 : String 2 is greater"<<endl;
    }
}
