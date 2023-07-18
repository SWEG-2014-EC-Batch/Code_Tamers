#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

struct Employee {
    int id, hrly_pay, yrs_spent;
    char sex;
}emp[10];

void input();
void order();
void write_file();

int main() {
    input();
    order();
    write_file();
}

void input() {
    int i=0;
    while(i<10)
    {
        cout<<setw(40)<<"Employee "<<i+1<<endl;
        cout<<setw(30)<<"Enter Id_num: ";
        cin>>emp[i].id;
        cout<<setw(30)<<"Enter gender: ";
        cin>>emp[i].sex;
        cout<<setw(30)<<"Enter Hourly payment: ";
        cin>>emp[i].hrly_pay;
        cout<<setw(30)<<"Enter year spent in company: ";
        cin>>emp[i].yrs_spent;
        i++;
    }
}

void order() {
    for (int i = 0; i < 10 - 1; ++i) {
        for (int j = 0; j < 10 - i - 1; ++j) {
            if (emp[j].id > emp[j + 1].id) {
                // all the position since they get affected by the sorting
                int temp = emp[j].id;
                emp[j].id = emp[j + 1].id;
                emp[j + 1].id = temp;
                
                //sorting the gender
                char temp1 = emp[j].sex;
                emp[j].sex = emp[j + 1].sex;
                emp[j + 1].sex = temp1;

                //sorting the hourly wage
                int temp2 = emp[j].hrly_pay;
                emp[j].hrly_pay = emp[j + 1].hrly_pay;
                emp[j + 1].hrly_pay = temp2;

                //sorting the year they spent
                int temp3 = emp[j].yrs_spent;
                emp[j].yrs_spent = emp[j + 1].yrs_spent;
                emp[j + 1].yrs_spent = temp3;
            }
        }
    }
}

void write_file() {
    ofstream qt;
    qt.open("employees.txt", ios::out);

    if(qt.is_open()) {
        for(int i=0;i<10;++i)
        {
            qt<<emp[i].id<<" "<<emp[i].sex<<" "<<emp[i].hrly_pay<<" "<<emp[i].yrs_spent<<endl;
        }
    }
}
