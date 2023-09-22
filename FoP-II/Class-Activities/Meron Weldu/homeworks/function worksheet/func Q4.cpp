#include<iostream>
using namespace std;
double getproduct(int num1, double num2);
int main(){
    int fnum = 2;
    double snum = 2.1;
    double product = getproduct(fnum, snum);
    cout<<"product equals to "<<product;
}

double getproduct(int num1, double num2){
    return num1*num2;
}
