#include<iostream>

using namespace std;

void valInp();
double converT(double leN,int &inP);
void valOut(double ouT);

int main()
{
    valInp();
}

void valInp()
{
    double leN;
    int inP;
    while(inP!=0)
    {
        cout<<"Choose 1 for converting feet and inches to meters and centimeters"<<endl<<
            "Choose 2 for converting meter and centimeter to feet and inches"<<endl<<
            "Enter 0 to exit"<<endl;
        cin>>inP;
        switch (inP)
        {
        case 1:
            {
                cout<<"Enter the lenght in feet and inches"<<endl;
                cin>>leN;
                valOut(converT(leN,inP));
            }
            break;
            
        case 2:
            {
                cout<<"Enter the lenght in meter and centimeter"<<endl;
                cin>>leN;
                valOut(converT(leN,inP));            }
            break;

        }
    };
}

double converT(double leN,int &inP)
{
    if(inP==1)
    {
        return leN*0.3048;
    }
    else if(inP==2)
    {
        return leN*3.2808;
    }
        return 0;
}

void valOut(double ouT)
{
    cout<<ouT<<endl;
}