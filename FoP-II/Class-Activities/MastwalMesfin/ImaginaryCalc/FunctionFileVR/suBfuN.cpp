#include"cmP.h"

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