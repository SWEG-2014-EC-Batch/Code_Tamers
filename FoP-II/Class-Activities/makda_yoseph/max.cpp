#include <iostream>
using namespace std;
double max(double,double);
double max(double,double,double);
int main(){
      double num1 =5,num2=6,num3=7;

     cout<<"the greatest number is "<<max(num1,num2);
      cout<<"the greatest number is "<<max(num1,num2,num3);
}
double max(double a,double b,double c){
    if (a>= b && b>=c){
        return a;
    }
    else if(b>=a && a>=c){
        return b;
    }
    else
        return c;
}
double max(double a, double b){
    if(a>=b){
        return a;
    }
    else return b;
}
