
#include <iostream>
using namespace std;

void swap(int &a, int &b);

void sorting(int &x, int &y, int &z);

int main() {
    int a, b, c;
    cout<<"Enter three integers:\n";
    cin>>a>>b>>c;
    sorting(a, b, c);
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void sorting(int &x, int &y, int &z) {
    cout<<"before swap"<<endl;
    cout<<"x = "<<x<<" y= "<<y<<" z= "<<z;

    if (x<y)
        swap(x,y);
    if (x<z)
        swap(x,z);
    if (y<z)
        swap(y,z);
    
    cout<<"after swapping:\n";
    cout<<"x = "<<x<<" y =  "<<y<<" z = "<<z;
}