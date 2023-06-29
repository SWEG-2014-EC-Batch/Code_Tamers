//version 3 of bmi calculator program with structure pointer
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct person {
    char name[10];
    char gender[7];
    int age;
    float weight;
    float height;
    float bmi;
}people[100];

//bmi calculator
float bmiCalc(float h, float w);

int num;
int main() {
    //create a structure pointer
    person* pep = people;

    cout<<"\nenter the number of person you want to calculate for: ";
    cin>>num;
    for(int i=0;i<num;++i) {
        cout<<"\n*****************\nFor person "<<i+1<<":-\n";
        cout<<"Enter you name: ";
        cin>>(pep+i)->name;
        cout<<"Enter you gender: ";
        cin>>(pep+i)->gender;
        cout<<"Enter age: ";
        cin>>(pep+i)->age;
        cout<<"Enter you weight: ";
        cin>>(pep+i)->weight;
        cout<<"Enter your height: ";
        cin>>(pep+i)->height;
    }

    //the display of the program
    cout<<"\n\n"<<setw(90)<<"When the data is tabulated:\n\n"<<setw(40)<<"name"<<setw(15)<<"gender"<<setw(15)<<"age"<<setw(15)<<"weight"<<setw(15)<<"height"<<setw(15)<<"bmi\n"<<setw(25)<<"\n\n";
    for(int i=0;i<num;++i) {
        (pep+i)->bmi = bmiCalc((pep+i)->height, (pep+i)->weight);
        cout<<setw(40)<<(pep+i)->name<<setw(15)<<(pep+i)->gender<<setw(15)<<(pep+i)->age<<setw(15)<<(pep+i)->weight<<setw(15)<<(pep+i)->height<<setw(15)<<(pep+i)->bmi<<endl;
    }
}

float bmiCalc(float h, float w) {
    return w / pow(h, 2);
}
