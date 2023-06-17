/*a c++ function based function that accept variables of type integer and 
double and return the product of two numbers, with double type*/

#include <iostream>
#include "getprod.h" //this is a header file created file 

/*the header file dummy.h is included in other header file so to avoid 
an error while including it  in other program we use the ifndef method.
*/
#ifndef DUMMY.H
#define DUMMY.H

using namespace std;

int main() {
    //the actual parameter type should be similar with the formal parameter 
    int firstNum;
    double secondNum;

    cout<<"Enter two numbers, one type of integer and other of double:\n";
    cin>>firstNum>>secondNum;

    double product=getProduct(firstNum, secondNum); //function called from the "getprod.h" header file
    cout<<"The product of the two num is: "<<product;
    dumb(); //calling a function from "dummy.h" header file
}

#endif //we have to end the ifndef method
