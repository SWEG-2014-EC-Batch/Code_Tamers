#include <string>
#include<iostream>
using namespace std;

string reversed(string str){
    int i = 0;
    int j = str.size() - 1;
    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
    cout<<"The reversed string is "<<str<<endl;

}


