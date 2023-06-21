#include<iostream>
using namespace std;
int power(int base, int ex){
    if(base == 1 || ex == 0){
        return 1;
    }
    else if(base == 0){return 0;}
    else{
        return base * power(base, ex-1);}
}
int main(){
    int base, ex;
    cout<<"Enter the base: ";
    cin>>base;
    cout<<"Enter the exponent: ";
    cin>>ex;
    cout<<base<<" the power of "<<ex<<" is "<<power(base, ex);
    return 0;
}
