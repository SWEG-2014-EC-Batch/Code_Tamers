#include <iostream>
#include <cmath>
using namespace std;
double hypotenuse(double side1,double side2);

int main()
{
    double x,y;
    cout<<"enter side 1: ";
    cin>>x;
    cout<<"enter side 2: ";
    cin>>y;
    cout<<"the hypotenuse of the triangle: "<<hypotenuse(x,y);
}
double hypotenuse(double side1,double side2)
{
    double hyp=sqrt(pow(side1,2) + pow(side2,2));
    return hyp;
}
