#include <iostream>
#include <fstream>
using namespace std;

struct Employee {
    int id, hrly_pay, yrs_spent;
    char sex;
}emp;

void changes();

int main() {
    changes();
}

void changes() {
    fstream hub("employees.txt", ios::in|ios::out);
    if(hub)
    {
    while(hub>>emp.id>>emp.sex)
    {
        hub<<rand() % 50<<" "<<rand() % 10<<endl;
    }
    hub.close();
    }   
}
