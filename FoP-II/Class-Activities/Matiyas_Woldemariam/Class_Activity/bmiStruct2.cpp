//this is version 2 of the bmi activity
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
//input values
void input();

//bmi calculator
float bmiCalc(float h, float w);

//the display part
void display();

int num;
int main() {
    input();
    display();
}

void input() {
    cout<<"\nenter the number of person you want to calculate for: ";
    cin>>num;
    for(int i=0;i<num;++i) {
        cout<<"\n*****************\nFor person "<<i+1<<":-\n";
        cout<<"Enter you name: ";
        cin>>people[i].name;
        cout<<"Enter you gender: ";
        cin>>people[i].gender;
        cout<<"Enter age: ";
        cin>>people[i].age;
        cout<<"Enter you weight: ";
        cin>>people[i].weight;
        cout<<"Enter your height: ";
        cin>>people[i].height;
    }
}

float bmiCalc(float h, float w) {
    return w / pow(h, 2);
}

void display() {
    cout<<"\n\nWhen the data is tabulated: \nname\t\tgender\t\tage\t\tweight\t\theight\t\tbmi\n";
    for(int i=0;i<num;++i) {
        people[i].bmi = bmiCalc(people[i].height, people[i].weight);
        cout<<people[i].name<<"\t\t"<<people[i].gender<<"\t\t"<<people[i].age<<"\t\t"<<people[i].weight<<"\t\t"<<people[i].height<<"\t\t"<<people[i].bmi<<endl;
    }
}
