#include <iostream>
using namespace std;
int fibonacci(int num,int x=0,int y=1);

int main()
{
    int num;
    cout<<"enter a number: ";
    cin>>num;
    cout<<"The fibonacci sum of numbers up to "<<num<<" is "<<fibonacci(num)<<endl;
    return 0;
}
int fibonacci(int num,int x,int y)
{
    int ai = 0;
    for(int i=1;i<num;i++)
    {
        ai=x+y;
        x=y;
        y=ai;
    }
    return ai;

}
