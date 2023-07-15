#include <iostream>
using namespace std;

struct pattern {
    int row , initial1=0, inital2=1;
};



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








char lower(int n, int i) {
    int space=0, number=i;
    if(i==1)
        n--;
    while(space<n) {
        cout<<"  ";
        space++;
    }
    while(number>=0) {
        cout<<number<<" ";
        if (number==0) {
            int l=1;
            while (l<=i) {
                cout<<l<<" ";
                l++;
            }
        }
        number--;
    }
    cout<<endl;
    if(n==0) 
        return ' ';
    return lower(n-1, i+1);
}
