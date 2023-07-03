#include"strinG.h"

void ruN()
{
    char choicE;
    while(choicE=='e'||choicE!='E')
    {
        inP();
        ouT();
        cout<<"\nEnter e(E) to re-excute the program:"<<endl<<">";
        cin>>choicE;
        system("clear");
    }
}