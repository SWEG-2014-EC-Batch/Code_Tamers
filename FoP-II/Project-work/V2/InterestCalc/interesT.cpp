#include <iostream>
using namespace std;

struct pattern {
    int row , initial1=0, inital2=1;
};



char lower(int n, int i);








char lower(int n, int i) {
    int space=0, number=i;
    if(i==1)
        n--;
    while(space<n) {
        cout<<"  ";
        space++;
    }
