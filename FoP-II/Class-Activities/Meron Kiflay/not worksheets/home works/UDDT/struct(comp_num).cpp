#include <iostream>
using namespace std;
struct comp
{
    int x,y;
};
void add(comp n,comp nn)
{
    int s=n.x+nn.x;
    int s2=n.y+nn.y;
    if (s2>=0)
    {
        cout<<" sum = "<<s<<" + "<<s2<<"i";
    }
    else
    {
        cout<<" sum = "<<s<<s2<<"i";
    }
}
void sub(comp n,comp nn)
{
    int s=n.x-nn.x;
    int s2=n.y-nn.y;
    if (s2>=0)
    {
        cout<<" difference = "<<s<<" + "<<s2<<"i";
    }
    else
    {
        cout<<" difference = "<<s<<s2<<"i";
    }
}
void div(comp n,comp nn)
{
    float s=((n.x*nn.x) + (n.y*nn.y)) / ((nn.x*nn.x) + (nn.y*nn.y));
    float s2=((n.y*nn.x) - (n.x*nn.y)) / ((nn.x*nn.x) + (nn.y*nn.y));
    if (s2>=0)
    {
        cout<<" division = "<<s<<" + "<<s2<<"i";
    }
    else
    {
        cout<<" division = "<<s<<s2<<"i";
    }
}
void mult(comp n,comp nn)
{
    int s=n.x*nn.x - n.y*nn.y;
    int s2=n.x*nn.y + n.y*nn.x;
    if (s2>=0)
    {
        cout<<" product = "<<s<<" + "<<s2<<"i";
    }
    else
    {
        cout<<" product = "<<s<<s2<<"i";
    }
}

int main()
{
    comp a,b;
    cout<<"enter the first number's real part: ";
    cin>>a.x;
    cout<<"enter the imaginary part of the first number: ";
    cin>>a.y;
    cout<<"enter the second number's real part: ";
    cin>>b.x;
    cout<<"enter the imaginary part of the second number: ";
    cin>>b.y;
    add(a,b);
    cout<<endl;
    sub(a,b);
    cout<<endl;
    mult(a,b);
    cout<<endl;
    div(a,b);
}