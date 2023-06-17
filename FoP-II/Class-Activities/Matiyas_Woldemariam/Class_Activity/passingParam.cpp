//This program demonstrate parameter passing by reference
#include <iostream>
using namespace std;

void calcQuotient(double n1, double n2, double &answer);

int main() {
    double num1, num2, quotient=20;
    cout<<"Enter two numbers:\n";
    cin>>num1>>num2;
    cout<<"when num1 divided by num2 it gives: ";
    calcQuotient(num1, num2, quotient);
}

void calcQuotient(double n1, double n2, double &answer) {
    answer = n1 / n2;
    cout<<answer;
}