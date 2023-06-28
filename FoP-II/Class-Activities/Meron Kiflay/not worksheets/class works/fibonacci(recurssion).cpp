#include <iostream>
using namespace std;
int fibo(int x)
{
    if (x==0){return 0;}
    else if (x<3){return 1;}
    else {return fibo(x-1)+fibo(x-2);}
}
int main()
{
    int n;
    cout<<"enter your number: ";
    cin>>n;
    cout<<"the fibonacci number at "<<n<<" is: "<<fibo(n);
}
