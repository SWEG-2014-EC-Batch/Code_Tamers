#include<iostream>

using namespace std;

int mid,max,min,numS[3]
    {2,4,5};

void numValues(int &higH,int &seC,int &smaL);

int main()
{
    int higH,seC,smaL=higH;
    numValues(higH,seC,smaL);
    cout<<"The highset number is "<<higH<<endl<<
        "The second highest number is "<<seC<<endl<<"The smallest number is "<<smaL<<endl;
}

void numValues(int &higH,int &seC,int &smaL)
{
    for(int i=0;i<3;i++)
    {
        if(numS[i]<=smaL)
        {
            smaL=numS[i];
        }

        if(numS[i]>=smaL)
        {
            higH=numS[i];
        }
    }

    for(int i=0;i<3;i++)
    {
        if(smaL<numS[i]&&numS[i]<higH)
        {
            seC=numS[i];
        }
    }
}