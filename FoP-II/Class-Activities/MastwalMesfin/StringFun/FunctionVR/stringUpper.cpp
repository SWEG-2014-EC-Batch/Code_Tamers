#include"strinG.h"

void stringUpper(string inpuT)
{
    int aSchar;
    for(char a:inpuT)
    {
        if(97<=int(a)&&int(a)<123)
        {
            aSchar=int(a)-32;
            a=char(aSchar);
        }
        cout<<a;
    }
}