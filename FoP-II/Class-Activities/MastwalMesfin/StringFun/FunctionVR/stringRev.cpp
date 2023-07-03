#include"strinG.h"

void stringRev(string inpuT)
{   
    for(int i=stringLen(inpuT);i>=0;i--)
    {
        cout<<inpuT[i];
    }
}