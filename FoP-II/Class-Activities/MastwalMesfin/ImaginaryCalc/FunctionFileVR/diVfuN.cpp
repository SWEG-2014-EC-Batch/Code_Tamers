#include"cmP.h"

void numDivider()
{
    numMultI(cmpNum[0].imagiNum,cmpNum[0].realNum,cmpNum[1].imagiNum,-cmpNum[1].realNum); 
    iI++;  
    numMultI(cmpNum[1].imagiNum,cmpNum[1].realNum,cmpNum[1].imagiNum,-cmpNum[1].realNum);
}