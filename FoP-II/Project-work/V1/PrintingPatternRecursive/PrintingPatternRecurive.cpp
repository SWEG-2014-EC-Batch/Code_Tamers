#include <iostream>

using namespace std;

void input(int& n);
char upper(int n, int i=0);
char lower(int n, int i=1);
void display();

// main block;



char upper(int n, int i) {
    int space=n-i, number=n;
    
    while(space<n) {
        cout<<"  ";
        space++;
    }
    while(number>=0) {
        cout<<number<<" ";
        if (number==0) {
            int l=1;
            while(l<=n) {
                cout<<l<<" ";
                l++;
            }
        }
        number--;
    }