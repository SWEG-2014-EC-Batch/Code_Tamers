#include"cmP.h"

void numInp()
{
    // cout<<"This is a program that does operation on compex numbers";
    cout<<"Choos an operation "<<endl;
    cout<<"1. For Addition"<<endl<<"2. For Substra"<<endl
        <<"3. For Multi"<<endl<<"4. For Divi"<<endl<<">";
    cin>>choicE;
    for(int i=0;i<sizE;i++)
    {
        cout<<"Enter the imaginary part of the number"<<endl;
        cin>>cmpNum[i].imagiNum;
        cout<<"Enter the real part number"<<endl;
        cin>>cmpNum[i].realNum;
        cmpNum[i].iN='i';
    }
}