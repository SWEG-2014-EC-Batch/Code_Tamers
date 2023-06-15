#include <iostream>
using namespace std;
double getProduct(int num1,double num2);

int main()
{
    int x;
    double y;
    cout<<"enter an integer: ";
    cin>>x;
    cout<<"enter a real number: ";
    cin>>y;
    cout<<"the real product: "<<getProduct(x,y);
}
double getProduct(int num1,double num2)
{
    return num1*num2;
}
