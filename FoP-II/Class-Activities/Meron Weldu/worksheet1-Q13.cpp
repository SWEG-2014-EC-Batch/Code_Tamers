#include<iostream>
using namespace std;
double max(double num1, double num2);
double max(double num1, double num2, double num3);
int main(){
    double n1, n2, n3;
    cout<<"Enter three numbers with space: ";
    cin>>n1>>n2>>n3;
    cout<<"The largest of the first two numbers is "<<max(n1, n2)<<endl;
    cout<<"The largest of all the three numbers is "<<max(n1, n2, n3)<<endl;
    return 0;
}
double max(double num1, double num2){
    if(num1 >= num2){
            return num1;}
    else{
        return num2;}
}
double max(double num1, double num2, double num3){
    if(num1>=num2 && num1>=num3){
        return num1;}
    else if(num2>=num1 && num2>=num3){
        return num2;}
    else{
        return num3;}
}
