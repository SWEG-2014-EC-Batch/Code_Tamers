#include"strinG.h"

void inP()
{
    cout<<"Enter:\n1. To know the length of a string\n2. To reverse a string\n3. To compare two strings\n"<<
        "4. To convert the uppercase chars to lowercase chars\n5. To convert the lowercase chars to uppercase chars"<<endl<<">";
    cin>>choicE;
    if(choicE!=3)
    {
        cout<<"Enter the string:"<<endl<<">";
        cin>>inpuT;
    }
    else
    {
        cout<<"Enter the first string:"<<endl<<">";
        cin>>inpuT;
        cout<<"Enter the second string:"<<endl<<">";
        cin>>inpuTS;
    }
}