#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

struct Employee {
    int id, hrly_pay, yrs_spent, mthly_hr[5], total_pay[5];
    char sex;
}emp;

void read_file();
void display();

int main() {
    read_file();
    display();
}

void read_file() {
    ifstream hans("employees.txt", ios::in);
    if(hans)
    {
        int i=0;
        while(hans>>emp.id>>emp.sex>>emp.hrly_pay>>emp.yrs_spent)
        {
            cout<<"Enter hours worked for month for id "<<emp.id<<": ";
            cin>>emp.mthly_hr[i];
            emp.total_pay[i] = emp.mthly_hr[i] * emp.hrly_pay;
            ++i;
        }
    }
    hans.close();
}

void display() {
    ifstream hans("employees.txt", ios::in);

    cout<<setw(40)<<"Id"<<setw(20)<<"monthlyHrs"<<setw(20)<<"HourlyPay"<<setw(20)<<"Total_pay"<<endl;
    int i=0;
    while (hans>>emp.id>>emp.sex>>emp.hrly_pay>>emp.yrs_spent) {
        cout<<setw(40)<<emp.id<<setw(20)<<emp.mthly_hr[i]<<setw(20)<<emp.hrly_pay<<setw(20)<<emp.total_pay[i]<<endl;
        ++i;
    }
    hans.close();   
}
