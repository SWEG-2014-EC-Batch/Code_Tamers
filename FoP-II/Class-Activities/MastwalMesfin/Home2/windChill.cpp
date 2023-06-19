#include<iostream>
#include<cmath>

using namespace std;

void windInp();
double windChill(double temP,double veL);

int main()
{
    windInp();
}

void windInp()
{
    double temP,veL;
    cout<<"Enter temp in C"<<endl;
    cin>>temP;
    cout<<"Enter vel in M/S"<<endl;
    cin>>veL;
    cout<<windChill(temP,veL)<<"C";
}

double windChill(double temP,double veL)
{
    double windCalc=(13.12+(0.6215*temP)-(11.37*pow(veL,0.16))+(0.3965*temP*pow(veL,0.016)));
    return windCalc;
}