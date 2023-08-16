#include <iostream>
#include <fstream>
#include <iomanip>
#include <cassert>
using namespace std;

struct Student {
    string name;
    float exam1, exam2, homework, final_exam, total;
    char  grade;
}stu[10];

int *n = new int;
void input();
void compute();
void display();
void write_on_file();

int main() {
    input();
    compute();
    display();
    write_on_file();
}

void input() {
    cout<<"enter the number of students:";
    cin>>*n;
    for(int i=0;i<*n;++i)
    {
        cout<<setw(20)<<"for student"<<i+1<<":\nenter name:";
        cin.ignore();
        getline(cin, stu[i].name);
        cout<<"enter exam1:";
        cin>>stu[i].exam1;
        cout<<"enter exam2:";
        cin>>stu[i].exam2;
        cout<<"enter homework:";
        cin>>stu[i].homework;
        cout<<"enter final exam";
        cin>>stu[i].final_exam;
    }
}

void compute() {
    for(int i=0;i<*n;++i)
    {
        stu[i].total=0.20*stu[i].exam1+0.20*stu[i].exam2+0.35*stu[i].homework+0.25;
        if(stu[i].total<=100 && stu[i].total>=90)
            stu[i].grade='A';
        else if(stu[i].total<90 && stu[i].total>=80)
            stu[i].grade='B';
        else if(stu[i].total<80 && stu[i].total>=70)
            stu[i].grade='C';
        else if(stu[i].total<70 && stu[i].total>=60)
            stu[i].grade='D';
        else if(stu[i].total<60)
            stu[i].grade='F';
        else
            assert("ENTER THE RIGHT MARK THERE IS A PROBLEM!");
    }
}

void display() {
    cout<<setw(10)<<"Name"<<setw(20)<<"Exam1"<<setw(20)<<"Exam2"<<setw(20)<<"Homework"<<setw(20)<<"Final_Exam"<<setw(20)<<"Total_mark"<<setw(20)<<"Grade\n";
    for(int i=0;i<*n;++i)
    {
        cout<<setw(10)<<stu[i].name<<setw(20)<<stu[i].exam1<<setw(20)<<stu[i].exam2<<setw(20)<<stu[i].homework<<setw(20)<<stu[i].final_exam<<setw(20)<<stu[i].total<<setw(20)<<stu[i].grade<<endl;
    }
}

void write_on_file() {
    fstream aman("gd.txt", ios::out);
    aman<<setw(40)<<"Hello People"<<endl;
    for(int i=0;i<*n;i++)
    {
           aman<<setw(10)<<stu[i].name<<setw(20)<<stu[i].exam1<<setw(20)<<stu[i].exam2<<setw(20)<<stu[i].homework<<setw(20)<<stu[i].final_exam<<setw(20)<<stu[i].total<<setw(20)<<stu[i].grade<<endl;
    }
}
