#include<iostream>
using namespace std;

#include<iostream>
#include<cmath>

using namespace std;

struct imaginaryNum
{
    float realNum,imagiNum;
    char operatoR,iN;
};

//This line contains the Global variables used..
extern const int sizE;
extern int choicE,suMI[],suMR[],iI;
extern imaginaryNum cmpNum[],suM,multiR;

//This line contains the function declartaions..
void numInp();
void numOut();
void numAdd();
void numSub();
void numMultI(float I0, float R0, float I1, float R1);
void numDivider();
