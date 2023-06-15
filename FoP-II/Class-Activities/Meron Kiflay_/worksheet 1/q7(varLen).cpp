#include <iostream>
using namespace std;
double varLen(int num,double l[]);

int main()
{
    int n;
    double x[n]={};
    double res=varLen(n,x);
    cout<<res;
}
double varLen(int num,double vals[]={})
{
    double prod=1,c;
    cout<<"enter the var len: ";
    cin>>num;
    int i=0;
    while(i<num ){
        cout<<"enter a number: ";
        cin>>c;
        vals[i]=c;
        i++;}
    for(int j=0;j<num;j++)
    {
      prod*=vals[j];
    }
    return prod;
}
