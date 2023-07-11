
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    ifstream pay("payment.txt", ios::in); //creating stream object and opening a file

    if(!pay.is_open()) {
        cout<<"file ain't opened!";
        exit(1);
    }

    char name[30];
    float rate, over_pay, reg_pay, gross_pay;
    int hrs;

    cout<<setw(100)<<"Payment Details\n"<<setw(40)<<"Name"<<setw(20)<<"Rate"<<setw(20)<<"Hours"<<setw(20)<<"reg_pay"<<setw(20)<<"overtime_pay"<<setw(20)<<"gross_pay\n";
    
    while(pay.eof()==false) {
        pay>>name>>rate>>hrs;
        reg_pay = hrs * rate;
        if(hrs>40)
            over_pay = reg_pay*1.5;
        else
            over_pay = 0;
        gross_pay = reg_pay + over_pay;
        cout<<setw(40)<<name<<setw(20)<<rate<<setw(20)<<hrs<<setw(20)<<reg_pay<<setw(20)<<over_pay<<setw(20)<<gross_pay<<endl;
    }

    pay.close();
    return 0;
}