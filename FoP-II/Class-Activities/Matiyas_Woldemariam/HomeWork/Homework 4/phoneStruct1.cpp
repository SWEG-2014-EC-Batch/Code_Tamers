//about phone number with structure
#include <iostream>
using namespace std;

struct phone {
    int areaCode;
    int exchange;
    int number;
}halo1 = {212, 767, 8900}, halo2;

int main() {
    cout<<"Enter your area of code: ";
    cin>>halo2.areaCode;
    cout<<"Enter the exchange number: \n->";
    cin>>halo2.exchange;
    cout<<"Enter the number: \n->";
    cin>>halo2.number;

    cout<<"\n\nThe the phone number for first struct var \n\t( "<<halo1.areaCode<<" "<<halo1.exchange<<"-"<<halo1.number<<" )";
    cout<<"\nnThen the phone number for second struct var \n\t( "<<halo2.areaCode<<" "<<halo2.exchange<<"-"<<halo2.number<<" )";
}