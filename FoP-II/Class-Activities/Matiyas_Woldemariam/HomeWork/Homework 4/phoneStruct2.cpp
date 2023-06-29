//about phone number with structure
#include <iostream>
#include <iomanip>
using namespace std;

struct phone {
    int areaCode;
    int exchange;
    int number;
};

struct contact {
    string name;
    phone phoneNum;
}pepa[10]; //structure array variable 

//this function accepts the input
void input();

//this function will display
void display();

//this dynamic variable is set to limit the number of contacts
int *n = new int;

int main() {
    input();
    display();
}

void input() {
    cout<<"enter the number of contact you want to add: ";
    cin>>*n;

    cout<<"enter the details:\n";
    for(int i=0;i<*n;++i) {
        cout<<"name "<<i+1<<": ";
        cin>>pepa[i].name;
        cout<<"phone No:- \n"<<setw(10)<<"area code: ";
        cin>>pepa[i].phoneNum.areaCode;
        cout<<setw(10)<<"exchange: ";
        cin>>pepa[i].phoneNum.exchange;
        cout<<setw(10)<<"number: ";
        cin>>pepa[i].phoneNum.number;
        cout<<endl;
    }
}

void display() {
    cout<<setw(60)<<"contact details\n\n"<<setw(40)<<"name"<<setw(30)<<"phone number\n\n";
    for(int j=0;j<*n;++j) 
        cout<<setw(40)<<pepa[j].name<<setw(20)<<pepa[j].phoneNum.areaCode<<" "<<pepa[j].phoneNum.exchange<<pepa[j].phoneNum.number<<endl;

    delete n; //deleting the variable n
}