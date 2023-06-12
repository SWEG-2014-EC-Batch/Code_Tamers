#include <iostream>
using namespace std;
float mult(float x, float y);
int main()
{
    float q,p;
    cout<<"enter the two numbers: ";
    cin>>q>>p;
    cout<<"the product of the two numbers: "<<mult(q,p);
}

float mult(float x, float y)
{
    return x*y;
}
