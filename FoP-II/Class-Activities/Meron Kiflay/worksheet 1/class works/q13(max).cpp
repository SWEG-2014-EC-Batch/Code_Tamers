#include <iostream>
using namespace std;
double max(double n1,double n2);
double max(double n1,double n2,double n3);

int main()
{
    double x,y,z;
    cout<<"enter a num: ";
    cin>>x;
    cout<<"enter the second num: ";
    cin>>y;
    cout<<"enter the third num: ";
    cin>>z;
    cout<<"the largest of the first two: "<<max(x,y)<<endl;
    cout<<"the largest of all: "<<max(x,y,z);
}
double max(double n1,double n2)
{
    if (n1>=n2){return n1;}
    else{return n2;}
}
double max(double n1,double n2,double n3)
{
 if (n1>n2 && n1>n3){return n1;}
 else if (n2>n1 && n2>n3){return n2;}
 else if (n3>n1 && n3>n2){return n3;}
}
