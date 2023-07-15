#include<iostream>
#include<iomanip>

using namespace std;

float inteRate,overInterst=0,paymenT,interesT,loaN,originaLoan,annualRate;
int i=0;

void inpuT();
void dataCalc();
void outpuT();

int main()
{
    inpuT();
    outpuT();
}

void inpuT()
{
    cout<<"Enter the the original loan:"<<endl<<">";
    cin>>loaN;
    originaLoan=loaN;
    cout<<"Enter the interst rate of the loan(the rate should be in decimal):"<<endl<<">";
    cin>>inteRate;
    system("clear");
    cout<<setw(20)<<"Loan(in Birr)"<<setw(20)<<"Payment(in Birr)"<<setw(20)<<"Interst(in Birr)"<<setw(20)<<"Annual Rate(in %)"<<endl<<endl;
}

void dataCalc()
{
    paymenT=originaLoan/20;
    interesT=(inteRate*loaN)/12;
}



void outpuT()
{
    dataCalc();
    if(loaN<originaLoan&&loaN>=0)
    {
        i++;
        cout<<setw(20)<<loaN<<setw(20)<<paymenT<<setw(20)<<interseT<<setw(20)<<annualRate<<"%"<<endl;
        
        outpuT();
    }
    else if(loaN>=originaLoan)
    {
        cout<<setw(20)<<loaN<<setw(20)<<paymenT<<setw(20)<<interseT<<setw(20)<<annualRate<<"%"<<endl;
        cout<<"The loan can't be payed with this interset rate."<<endl;
    }
    else
    {
        cout<<endl<<"Summary:"<<endl<<"The interst rate is: "<<inteRate*100<<"%"
            <<endl<<"Loan payment due(in years): "<<i;
    }
}
