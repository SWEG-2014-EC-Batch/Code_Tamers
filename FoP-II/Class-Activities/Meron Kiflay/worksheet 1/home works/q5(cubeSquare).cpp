#include <iostream>
#include <cmath>
using namespace std;
double cubeSquare(double num1,double num2);

int main()
{
    double x,y;
    cout<<"enter the first num: ";
    cin>>x;
    cout<<"enter the second num: ";
    cin>>y;
    cout<<"answer: "<<cubeSquare(x,y);
}
double cubeSquare(double num1,double num2)
{
    double answer=pow(num1,3) + sqrt(num2);
    return answer;
}
