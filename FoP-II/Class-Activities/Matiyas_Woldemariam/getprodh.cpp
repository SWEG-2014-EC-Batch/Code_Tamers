/*a c++ function based function that accept variables of type integer and 
double and return the product of two numbers, with double type*/

#include <iostream>
#include "getprod.h"

#ifndef DUMMY.H
#define DUMMY.H

using namespace std;

int main() {
    //the actual parameter type should be similar with the formal parameter 
    int firstNum;
    double secondNum;

    cout<<"Enter two numbers, one type of integer and other of double:\n";
    cin>>firstNum>>secondNum;

    double product=getProduct(firstNum, secondNum);
    cout<<"The product of the two num is: "<<product;
    dumb();
}

#endif