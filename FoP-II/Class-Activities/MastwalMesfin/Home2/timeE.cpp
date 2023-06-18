#include<iostream>

using namespace std;

int houR,miN;
char inP,loC;

void timeInp();
void timeOut();
void timeConvert(int &houR,char &loC);

int main()
{
    timeOut();
}

void timeInp()
{
        cout<<"Enter a number"<<endl;
        cin>>houR;
        cout<<"Enter a number"<<endl;
        cin>>miN;
        timeConvert(houR,loC);
}

void timeConvert(int &houR,char &loC)
{
    if(houR>12&&houR<=24)
    {
        houR=houR-12;
        loC='P';
    }
    else
    loC='A';
}

void timeOut()
{
    do
    {
        timeInp();
        cout<<houR<<":"<<miN<<" "<<loC<<endl;
        cout<<"Enter Q(q) to end the program use any other key to continue"<<endl;
        cin>>inP;
    }
    while(inP!='q');
}