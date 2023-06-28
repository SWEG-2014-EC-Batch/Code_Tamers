#include <iostream>
using namespace std;

struct student
{
    char stuId[10];
    float testMark;
    float finalMark;
};

int main() {
    student stu; //part is structure variable for student structure
    cout<<"Enter Your Id: ";
    cin>>stu.stuId;
    cout<<"Enter your test mark: ";
    cin>>stu.testMark;
    cout<<"Enter your final mark: ";
    cin>>stu.finalMark;

    float sum = stu.testMark + stu.finalMark;
    cout<<"your total is "<<sum;
    cout<<"\nthe records of the student:";
}