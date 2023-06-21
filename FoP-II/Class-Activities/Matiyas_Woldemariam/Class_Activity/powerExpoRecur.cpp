/*a progrma that calculate the power of a number by accepting two numbers from user,
one as base and other number as an exponent. Then it will return the calculated value.*/

#include <iostream>
using namespace std;

int power(int n, int e);
int n, e;

int main() {
    cout<<"Enter the base: ";
    cin>>n;
    cout<<"Enter the exponent: ";
    cin>>e;

    cout<<"Then the power is: "<<power(n,e);
}

int power(int n, int e) {
    if(e==0)
        return 1;
    return n * power(n, e-1);
}
