#include<iostream>
#include<cmath>
using namespace std;
double currents(double current[5]);
double powers(double resistance[5], double current[5], double power[5]);
void display(double resistance[5], double current[5], double power[5]);

int main(){
    double resistance[5] = {16, 27, 39, 56, 81};
    double current[5];
    double power[5];

    currents(current);
    powers(resistance, current, power);
    display(resistance, current, power);

    return 0;

}

double currents(double current[5]){
    for(int i=0; i<5; i++){
        cout<<"Enter current: ";
        cin>>current[i];  }
}

double powers(double resistance[5], double current[5], double power[5]){
    for(int i=0; i<5; i++){
        power[i] = resistance[i] * pow(current[i],2);
    }
}

void display(double resistance[5], double current[5], double power[5]){
    cout<< "RESISTANCE" << "\t" << "CURRENT" << "\t" <<"\t"<< "POWER" <<endl;
    for(int i=0; i<5; i++){
        cout<< resistance[i] << "\t" <<"\t"<< current[i] << "\t" <<"\t"<< power[i] <<endl;
    }

}
