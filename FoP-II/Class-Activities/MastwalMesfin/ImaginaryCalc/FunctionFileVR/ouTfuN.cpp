#include"cmP.h"

void numOut()
{
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