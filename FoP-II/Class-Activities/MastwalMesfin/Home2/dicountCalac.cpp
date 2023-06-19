#include<iostream>

using namespace std;

void discountCalc(bool tyP, double discounT, double &pricE);
void calcInp();

int main()
{
    calcInp();
}

void calcInp()
{
    bool tyP;
    double discounT,pricE;
    int inP;

    cout<<"Enter the price of the item"<<endl;
    cin>>pricE;

    cout<<"Enter 1 if the discount is by percentage"<<endl
        <<"Enter 2 if the discount is not by percentage (Value discount)"<<endl;
    cin>>inP;

    cout<<"Enter the amount of discount"<<endl;
    cin>>discounT;

    if(inP==1)
    {
        tyP=true;
    }
    else if(inP==2)
    {
        tyP=false;
    }

    discountCalc(tyP,discounT,pricE);
}

void discountCalc(bool tyP, double discounT, double &pricE)
{
    if(discounT<0)
    {
        exit;
    }

    if(tyP==true)
    {
       discounT=(pricE*discounT)/100; 
       pricE=pricE-discounT;
       if(pricE<=0)
       {
        cout<<"The price is lower than 0"<<endl;
        exit;
       }

       else
       {
        cout<<"The discount is "<<discounT<<endl;
        cout<<"The price after the discount is "<<pricE<<endl;
       }
    }

    else if(tyP==false)
    {
        pricE=pricE-discounT;
        if(pricE<=0)
       {
        cout<<"The price is lower than 0"<<endl;
        exit;
       }

       else
       {
        cout<<"The discount is "<<discounT<<endl;
        cout<<"The price after the discount is "<<pricE<<endl;
       }
    }

}