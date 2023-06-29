//version 3 of bmi calculator program with structure pointer
#include <iostream>
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
    //declare array of pointers to person structures
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
    cout<<"\n\nWhen the data is tabulated: \nname\t\tgender\t\tage\t\tweight\t\theight\t\tbmi\n \t-------------------------------------------------------\n";
    for(int i=0;i<num;++i) {
        (pep+i)->bmi = bmiCalc((pep+i)->height, (pep+i)->weight);
        cout<<(pep+i)->name<<"\t\t"<<(pep+i)->gender<<"\t\t"<<(pep+i)->age<<"\t\t"<<(pep+i)->weight<<"\t\t"<<(pep+i)->height<<"\t\t"<<(pep+i)->bmi<<endl;
    }
}

float bmiCalc(float h, float w) {
    return w / pow(h, 2);
}
