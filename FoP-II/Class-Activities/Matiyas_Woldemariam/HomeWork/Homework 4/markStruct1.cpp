#include <iostream>
#include <iomanip>
using namespace std;

struct student
{
    char stuId[10];
    float testMark, finalMark, totalMark;
}stu[50];

void input();
float markCalc(float x, float y);
void display();

int *n = new int, i=0;

int main() {
    input();
    display();
}

void input() {
    cout<<"enter the number of students: ";
    cin>>*n;
    while(i<*n) {
        cout<<"\nstudent "<<i+1<<":-\n";
        cout<<"Enter Your Id: ";
        cin>>stu[i].stuId;
        cout<<"Enter your test mark: ";
        cin>>stu[i].testMark;
        cout<<"Enter your final mark: ";
        cin>>stu[i].finalMark;
        stu[i].totalMark = markCalc(stu[i].testMark, stu[i].finalMark);
        i++;
    }
}

float markCalc(float x, float y) {
    return x + y;
}

void display() {
    cout<<setw(40)<<"Student_Id"<<setw(20)<<"Test Mark"<<setw(20)<<"Final Mark"<<setw(20)<<"Total Mark\n\n";
    for(int i=0;i<*n;i++) {
        cout<<setw(40)<<stu[i].stuId<<setw(20)<<stu[i].testMark<<setw(20)<<stu[i].finalMark<<setw(20)<<stu[i].totalMark<<endl;
    }
}