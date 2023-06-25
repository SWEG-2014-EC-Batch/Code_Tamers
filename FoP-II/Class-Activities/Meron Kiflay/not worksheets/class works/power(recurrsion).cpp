#include <iostream>
using namespace std;
int pow(int r,int x)
{
    if (x==0||r==1){return 1;}
    else if(r==0){return 0;}
    else{return r*pow(r,x-1);}
}
int main()
{
    int n,ex;
    cout<<"enter the base: ";
    cin>>n;
    cout<<"enter the exponent: ";
    cin>>ex;
    cout<<pow(n,ex);
}
