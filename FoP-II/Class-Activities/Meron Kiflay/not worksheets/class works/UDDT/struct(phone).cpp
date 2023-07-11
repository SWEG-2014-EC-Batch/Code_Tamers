#include <iostream>
using namespace std;
int main()
{
    struct phone
    {
        char area[4];
        char exc[4],num[5];
    };
    phone p2,p1={"212","328","3546"};
    cout<<"enter your area code: ";
    gets(p2.area);
    cout<<"enter your exchange: ";
    gets(p2.exc);
    cout<<"enter your number: ";
    gets(p2.num);
    cout<<"phone number 1: "<<p1.area<<"-"<<p1.exc<<"-"<<p1.num<<endl;
    cout<<"phone number 2: "<<p2.area<<"-"<<p2.exc<<"-"<<p2.num;

}
