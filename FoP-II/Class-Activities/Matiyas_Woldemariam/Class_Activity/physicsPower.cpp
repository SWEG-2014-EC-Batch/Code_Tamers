/*a program that accept 5 current values and then  calculates the power using
existing resistance value and then print is in tabular form*/

#include <iostream>
#include <cmath>
using namespace std;

void infoPar(int cur[]);

void power(int res[], int cur[], int powe[]);

void sum(int res[], int cur[], int pow[]);

int sumr, sumc, sump;

int main() {
    int res[5] = {16, 25, 12, 23, 18}, cur[5], pow[5];
    infoPar(cur);
    power(res, cur, pow);
    cout<<"\nResistance\tCurrent\t\tPower\n";
    for(int i=0;i<5;++i) {
        cout<<res[i]<<"\t\t"<<cur[i]<<"\t\t"<<pow[i]<<endl;
    }
    sum(res, cur, pow);
    cout<<"------------------------------------------\n";
    cout<<sumr<<"\t\t"<<sumc<<"\t\t"<<sump<<"\t\tTotal";
}

void infoPar(int cur[]) {
    cout<<"Enter the current values:\n";
    for(int i=0;i<5;++i) {
        cout<<"current"<<i+1<<":";
        cin>>cur[i];
    }
}

void power(int res[], int cur[], int powe[]) {
    for(int k=0;k<5;++k)
        powe[k] = pow(cur[k], 2) * res[k]; 
}

void sum(int res[], int cur[], int pow[]) {
    for(int k=0;k<5;++k) {
        sumr += res[k];
        sumc += cur[k];
        sump += pow[k];
    }
}
