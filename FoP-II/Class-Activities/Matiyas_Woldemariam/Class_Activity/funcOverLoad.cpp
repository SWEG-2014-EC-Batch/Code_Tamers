//this program demonestrate about function overloading
#include <iostream>
#include <cmath>
using namespace std;

//function declaration for func overloading part
double maximum(int x, int y);

double maximum(int a, int b, int c);

int main() {
    int a,b,c;
    cout<<maximum(a, b, c);
    cout<<maximum(a,b);
}

//function defintion for func overloading part
double maximum(int x, int y) {
    cout<<"\nEnter two different numbers:\n";
    cin>>x>>y;
    cout<<"The largest number is: ";
    return max(x, y);
}

double maximum(int a, int b, int c) {
    cout<<"\nenter three different numbers: \n";
    cin>>a>>b>>c;
    cout<<"the largest numbers is: ";
    int d = max(a, b);
    return max(d, c);
}
