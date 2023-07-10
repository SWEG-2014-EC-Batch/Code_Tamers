#include"cmP.h"

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