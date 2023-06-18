#include<iostream>
using namespace std;
void calcQuotient(double n1,double n2,double& answer);
int main(){
    double num1, num2, quotient;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    if(num2 != 0){
            calcQuotient(num1, num2, quotient);
    cout<<"The Quotient is "<<quotient<<endl;
        }

    return 0;
}
void calcQuotient(double n1,double n2,double& answer){
    answer = n1/n2;

}
