#include"strinG.h"

void stringLower(string inpuT)
{
    int aSchar;
    for(char a:inpuT)
    {
        if(65<=int(a)&&int(a)<91)
        {
            aSchar=int(a)+32;
            a=char(aSchar);
        }
        cout<<a;
    }
}