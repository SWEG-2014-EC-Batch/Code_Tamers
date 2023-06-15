//find the fibonacci by passing parameters and by passing none using default parameters
#include <iostream>
using namespace std;

//recursive fibonacci function prototype
void fib(int target=5, int n1=1, int n2=1);

int main() {
    int n1=0, n2=1, element=5;
    cout<<"the fibbonaci sequence is: \n";
    fib(element, n1, n2);

    cout<<"\nThe Fibbonacci is: \n";
    fib();
}

void fib(int target, int n1, int n2) {
    int n3;
    cout <<n1<<"\t"<<n2<<"\t";
    
    for(int i=2;i<target;++i) {
        n3=n1+n2;
        cout << n3 <<"\t";
        n1=n2;
        n2=n3;
    }
}
