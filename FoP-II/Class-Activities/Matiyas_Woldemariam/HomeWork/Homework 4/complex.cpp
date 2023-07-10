
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct complex {
    float real, img;
}c[2];

//declaration of the functions
void input();
void add();
void subt();
void mult();
void div();

int main() {
    input();
    add();
    subt();
    mult();
    div();
}

//definition of the functions
void input() {
    cout<<setw(40)<<"enter real part 1: ";
    cin>>c[1].real;
    cout<<setw(40)<<"enter imaginary part 1: ";
    cin>>c[1].img;
    cout<<setw(40)<<"enter real part 2: ";
    cin>>c[2].real;
    cout<<setw(40)<<"enter imaginary part 1: ";
    cin>>c[2].img;
}

void add() {
    cout<<"\nwhen adding the two complex numbers:-\n"<<setw(40)<<c[1].real + c[2].real;
    if(c[1].img + c[2].img==1)
        cout<<"+i";
    else if(c[1].img + c[2].img==-1)
        cout<<"-i";
    else if(c[1].img + c[2].img<0)
        cout<<c[1].img + c[2].img<<"i";
    else
        cout<<"+"<<c[1].img + c[2].img<<"i";
}

void subt() {
    cout<<"\n\nwhen subtracting the two complex numbers:-\n"<<setw(40)<<c[1].real - c[2].real;
    if((c[1].img-c[2].img)>0)
        cout<<"+"<<c[1].img-c[2].img<<"i";
    else
        cout<<c[1].img-c[2].img<<"i";
}

void mult() {
    cout<<"\n\nwhen multiplying the two complex numbers:-\n"<<setw(40)<<(c[1].real * c[2].real) - (c[1].img * c[2].img);
    if(((c[1].real*c[2].img)+(c[1].img*c[2].real))>0) {
        if(((c[1].real*c[2].img)+(c[1].img*c[2].real))==1)
            cout<<"+i";
        cout<<"+"<<(c[1].real*c[2].img)+(c[1].img*c[2].real)<<"i";
    }
    else if(((c[1].real*c[2].img)+(c[1].img*c[2].real))==-1)
        cout<<"-i";
    else
        cout<<(c[1].real*c[2].img)+(c[1].img*c[2].real)<<"i";
}

void div() {
    cout<<"\n\nwhen dividing the two complex numbers:-\n"<<setw(40)<<((c[1].real * c[2].real) - (c[1].img * c[2].img));
    if((c[1].real*c[2].img) + (c[1].img*c[2].real) > 0) {
        if((c[1].real*c[2].img) + (c[1].img*c[2].real))
            cout<<"+i";
        cout<<"+"<<(c[1].real*c[2].img) + (c[1].img*c[2].real)<<"i";
    }
    else if((c[1].real*c[2].img) + (c[1].img*c[2].real) == -1)
        cout<<"-i";
    else
        cout<<(c[1].real*c[2].img) + (c[1].img*c[2].real)<<"i";
    cout<<"/"<<pow(c[2].real,2)+pow(c[2].img,2);
}