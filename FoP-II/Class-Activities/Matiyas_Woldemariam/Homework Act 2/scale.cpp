
#include<iostream>
#include<cassert>
using namespace std;
void scale(double x, double& y, double& z);
int main(){
    double a, b, c;
    cout<<"Enter the scale: ";
    cin>>a;
    cout<<"Enter two numbers you want to scale up or down: ";
    cin>>b>>c;
    scale(a, b, c);


}
void scale(double x, double& y, double& z){
    assert(x != 0);
    cout<<"Before scaling num1 = "<<y<<" mum2 = "<<z<<endl;
    y *= x;
    z *= x;
    cout<<"After scaling num1 = "<<y<<" num2 = "<<z<<endl;
}