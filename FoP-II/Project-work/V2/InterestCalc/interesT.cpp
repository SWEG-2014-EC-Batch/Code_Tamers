#include<iostream>
#include<iomanip>

using namespace std;

struct interest {
float inteRate,overInterst=0,paymenT,interseT,loaN,originaLoan,annualRate;
int i=0;
}it;



void outpuT();



void dataCalc()
{


    
    it.annualRate=(it.loaN/it.originaLoan)*100;
    it.overInterst=it.paymenT-it.interseT;
    it.loaN-=it.overInterst;
}


void outpuT()
{
    dataCalc();
    if(it.loaN>=0)
    {
        it.i++;
        cout<<setw(20)<<it.loaN<<setw(20)<<it.paymenT<<setw(20)<<it.interseT<<setw(20)<<it.annualRate<<"%"<<endl;
        
        outpuT();
    }
    else
    {
        cout<<endl<<"Summary:"<<endl<<"The interst rate is: "<<it.inteRate*100<<"%"
            <<endl<<"Loan payment due(in years): "<<it.i;
    }
}
