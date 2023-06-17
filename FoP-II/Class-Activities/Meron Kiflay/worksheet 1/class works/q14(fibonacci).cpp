#include <iostream>
using namespace std;
int fibo(int num=10,int x=1,int y=1);

int main()
{
    int z;
    cout<<"enter the num: ";
    cin>>z;
    cout<<"the fibonacci  number of "<<z<<" :"<<fibo(z);
}
int fibo(int num,int x,int y)
{
    int ai;
    if (num==1){return x;}
    else if (num==2){return y;}
    else{
        for(int i=2;i<num;i++)
        {
            ai=x+y;
            x=y;
            y=ai;
        }
        return ai;
    }
}
