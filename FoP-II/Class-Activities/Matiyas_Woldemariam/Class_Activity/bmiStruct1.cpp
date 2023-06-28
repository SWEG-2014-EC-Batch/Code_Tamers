#include <iostream>
#include <cmath>
using namespace std;

struct person {
    char name[20];
    char gender[6];
    int age;
    float weight;
    float height;
    float bmi;
}pepa[10];

int main() {
    int num;
    cout<<"Enter the number of people you want to compute bmi for: ";
    cin>>num;
    for(int i=0;i<num;++i) {
        cout<<"For person "<<i+1<<":-\n";
        cout<<"Enter name: ";
        cin>>pepa[i].name;
        cout<<"Enter gender: ";
        cin>>pepa[i].gender;
        cout<<"Enter age: ";
        cin>>pepa[i].age;
        cout<<"Enter height: ";
        cin>>pepa[i].height;
        cout<<"Enter weight: ";
        cin>>pepa[i].weight;

        pepa[i].bmi = pepa[i].weight / pow(pepa[i].height, 2);
    }

    cout<<"Then when the data is tabulated: \n\nname\t\tgender\t\tage\t\theight\t\tweight\t\tbmi\n";
    for(int i=0;i<num;++i) {
        cout<<pepa[i].name<<"\t\t"<<pepa[i].gender<<"\t\t"<<pepa[i].age<<"\t\t"<<pepa[i].height<<"\t\t"<<pepa[i].weight<<"\t\t"<<pepa[i].bmi<<endl;
    }
    
}