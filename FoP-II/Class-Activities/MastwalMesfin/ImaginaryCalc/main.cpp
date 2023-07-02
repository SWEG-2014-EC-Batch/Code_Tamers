#include<iostream>
#include<cmath>

using namespace std;

struct imaginaryNum
{
    float realNum,imagiNum;
    char operatoR,iN;
};

//This line contains the Global variables used..
const int sizE=2;
int suMI[sizE],suMR[sizE],iI=0;
imaginaryNum cmpNum[sizE],suM,multiR;

//This line contains the function declartaions..
void numInp();
void numAdd();
void numSub();
void numMultI(float I0, float R0, float I1, float R1);
void numDivider();

int main()
{
   numInp();
}

void numInp()
{
    int typE, choicE; 
    char imaG1, imaG2;
    cout<<"Choos an operation "<<endl;
    cout<<"1. For Addition"<<endl<<"2. For Substra"<<endl
        <<"3. For Multipl"<<endl<<"4. For Divis"<<endl<<">";
    cin>>choicE;
    for(int i=0;i<sizE;i++)
    {
        cout<<"Enter the imaginary part of the number"<<endl;
        cin>>cmpNum[i].imagiNum;
        cout<<"Enter the real part number"<<endl;
        cin>>cmpNum[i].realNum;
        cmpNum[i].iN='i';
    }

    switch(choicE)
    {
        case 1:
        {
            numAdd();
        }
        break;

        case 2:
        {
            numSub();
        }
        break;

        case 3:
        {
            numMultI(cmpNum[0].imagiNum,cmpNum[0].realNum,cmpNum[1].imagiNum,cmpNum[1].realNum);
        }
        break;

        case 4:
        {
            numDivider();
            suM.operatoR='+';
            cout<<"The result is: "<<suMI[0]/suMR[1]<<cmpNum[0].iN<<suM.operatoR
                <<suMR[0]/suMR[1];
        }
        break;
    }
    if(choicE!=4)
    {
        cout<<"The result is: "<<suMI[0]<<cmpNum[0].iN<<suM.operatoR<<suMR[0];
    }
}

void numAdd()
{
    if(iI<sizE)
    {
        suMI[0]+=cmpNum[iI].imagiNum;
        suMR[0]+=cmpNum[iI].realNum;
        iI++;
        numAdd();
    }
    
    if(suMR[0]>=0)
    {
        suM.operatoR='+';
    }
}

void numSub()
{
    if(iI==0)
    {
        suMI[0]=cmpNum[iI].imagiNum;
        suMR[0]=cmpNum[iI].realNum;
        iI++;
        numSub();
    }
    else if(iI<sizE&&iI!=0)
    {
        suMI[0]-=cmpNum[iI].imagiNum;
        suMR[0]-=cmpNum[iI].realNum;
        iI++;
        numSub();
    }

        if(suMR[0]>=0)
    {
        suM.operatoR='+';
    }
}

void numMultI(float I0, float R0, float I1, float R1)
{
    multiR.realNum=(R0*R1)-(I0*I1);
    multiR.imagiNum=(R0*I1)+(I0*R1);

    suMI[iI]=multiR.imagiNum;
    suMR[iI]=multiR.realNum;

    if(suMR[iI]>=0)
    {
        suM.operatoR='+';
    }
}

void numDivider()
{
    numMultI(cmpNum[0].imagiNum,cmpNum[0].realNum,cmpNum[1].imagiNum,-cmpNum[1].realNum); 
    iI++;  
    numMultI(cmpNum[1].imagiNum,cmpNum[1].realNum,cmpNum[1].imagiNum,-cmpNum[1].realNum);
}
