#include<iostream>
#include<iomanip>

using namespace std;

struct interest {
float inteRate,overInterst=0,paymenT,interseT,loaN,originaLoan,annualRate;
int i=0;
}it;

void inpuT();
void dataCalc();
void outpuT();

int main()
{
    inpuT();
    dataCalc();
    outpuT();
}

void inpuT()
{
    cout<<"Enter the the original loan:"<<endl<<">";
    cin>>it.loaN;
    it.originaLoan=it.loaN;
    cout<<"Enter the interst rate of the loan(the rate should be in decimal):"<<endl<<">";
    cin>>it.inteRate;
    system("clear");
    cout<<setw(20)<<"Loan(in Birr)"<<setw(20)<<"Payment(in Birr)"<<setw(20)<<"Interst(in Birr)"<<setw(20)<<"Annual Rate(in %)"<<endl<<endl;
}

void dataCalc()
{
    it.paymenT=it.originaLoan/20;
    it.interseT=(it.inteRate*it.loaN)/12;      
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
