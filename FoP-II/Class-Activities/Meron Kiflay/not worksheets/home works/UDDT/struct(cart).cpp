#include <iostream>
using namespace std;
struct cart
{
    int x,y;
};
cart read()
{
    cart c;
    cout<<"enter the x coordinate: ";
    cin>>c.x;
    cout<<"enter the y coordinate: ";
    cin>>c.y;
    return c;
}
void print(cart d)
{
    cout<<"the coordinates are: ("<<d.x<<","<<d.y<<") ";
};
int main()
{
    cart coo=read();
    print(coo);
}
