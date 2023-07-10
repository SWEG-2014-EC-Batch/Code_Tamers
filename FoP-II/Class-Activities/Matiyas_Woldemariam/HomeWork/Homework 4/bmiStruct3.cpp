
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct person {
    string name;
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
        cin.ignore();
        getline(cin, (pep+i)->name);
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
    cout<<"\n\n"<<setw(100)<<"When the data is tabulated: \n\n"<<setw(40)<<"name"<<setw(15)<<"gender"<<setw(15)<<"age"<<setw(15)<<"weight"<<setw(15)<<"height"<<setw(15)<<"bmi\n"<<setw(25)<<"\n\n";
    for(int i=0;i<num;++i) {
        (pep+i)->bmi = bmiCalc((pep+i)->height, (pep+i)->weight);
        cout<<setw(40)<<(pep+i)->name<<setw(15)<<(pep+i)->gender<<setw(15)<<(pep+i)->age<<setw(15)<<(pep+i)->weight<<setw(15)<<(pep+i)->height<<setw(15)<<(pep+i)->bmi<<endl;
    }
}

float bmiCalc(float h, float w) {
    return w / pow(h, 2);
}