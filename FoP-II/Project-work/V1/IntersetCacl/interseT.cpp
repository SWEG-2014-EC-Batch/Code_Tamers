#include<iostream>
#include<iomanip>

using namespace std;

float inteRate,overInterst=0,paymenT,interseT,loaN,originaLoan,annualRate;
int i=0;

void inpuT();
void dataCalc();

int main()
{
    inpuT();
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
    paymenT=originalLoan/20;
    interesT=(interRate*loaN)/12;
}
