#include"strinG.h"

void ouT()
{
    switch(choicE)
    {
        case 1:
        {
            cout<<"The length of the string is "<<stringLen(inpuT)<<endl;
            cout<<"The number of vowels in the string is "<<stringTypLen(inpuT)<<endl;
            cout<<"The number of non vowel in the string is "<<stringLen(inpuT)-(k)<<endl;
        }
        break;

        case 2:
        {
            cout<<"The reverse of the string is "; stringRev(inpuT); cout<<endl;
        }
        break;
        case 3:
        {
            cout<<"The return value is "<<stringCmp()<<" So ";
                if(stringCmp()==0)
                {
                    cout<<"The two strings are equal"<<endl;
                }

                else if(stringCmp()==1)
                {
                    cout<<"The first string is greater than the second one"<<endl;
                }

                else
                {
                    cout<<"The second string is greater than the fist one"<<endl;
                }
        }
        break;

        case 4:
        {
            cout<<"When the chars are converted the string is "; stringLower(inpuT);cout<<endl;
        }
        break;

        case 5:
        {
            cout<<"When the chars are converted the string is "; stringUpper(inpuT);cout<<endl;
        }
    }
}