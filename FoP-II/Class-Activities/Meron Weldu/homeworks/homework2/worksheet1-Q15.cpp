#include<iostream>
#include<cassert>
using namespace std;
void scale(double num1, double& num2, double& num3);
int main(){
    double x , y, z;
    cout<<"Enter the scale: ";
    cin>>x;
    cout<<"Enter two numbers you want to scale up or down: ";
    cin>>y>>z;
    scale(x, y, z);


}
void scale(double num1, double& num2, double& num3){
    assert(num1 != 0);
    cout<<"Before scaling X = "<<num2<<" Y = "<<num3<<endl;
    num2 *= num1;
    num3 *= num1;
    cout<<"After scaling X = "<<num2<<" Y = "<<num3<<endl;
}
