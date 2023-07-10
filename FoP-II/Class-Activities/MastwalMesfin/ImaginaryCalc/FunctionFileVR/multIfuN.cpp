#include"cmP.h"

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