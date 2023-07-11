#include <iostream>
using namespace std;
struct phone
    {
        char area[4],exc[4],num[5];
    };
    struct info
    {
        char name[50];
        phone p;
    }in[10];
void ask()
{
    for(int i=0;i<3;i++)
    {
        cout<<"enter name "<<i+1<<": ";
        cin.ignore();
        cin.getline(in[i].name,50);
        cout<<"enter your area code: ";
        cin.ignore();
        cin.getline(in[i].p.area,4);
        cout<<"enter your exchange: ";
        cin.ignore();
        cin.getline(in[i].p.exc,4);
        cout<<"enter your number: ";
        cin.ignore();
        cin.getline(in[i].p.num,5);
    }
}
void display()
{
    cout<<"name "<<"\t"<<"phone"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<in[i].name<<"\t"<<in[i].p.area<<"-"<<in[i].p.exc<<"-"<<in[i].p.num<<endl;
    }
}
int main()
{
    ask();
    display();
}
