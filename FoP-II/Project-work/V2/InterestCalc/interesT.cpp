#include<iostream>
#include<iomanip>

using namespace std;

struct interest {
float inteRate,overInterst=0,paymenT,interseT,loaN,originaLoan,annualRate;
int i=0;
}it;




void outpuT();











void outpuT()
{
    dataCalc();
    if(it.loaN>=0)
    {
        it.i++;
        cout<<setw(20)<<it.loaN<<setw(20)<<it.paymenT<<setw(20)<<it.interseT<<setw(20)<<it.annualRate<<"%"<<endl;
        
        outpuT();
    }
