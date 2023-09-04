#include <iostream>

using namespace std;

void input(int& n);
char upper(int n, int i=0);
char lower(int n, int i=1);
void display();

// main block;
int main() {
    display();
}

void input(int& n) {
    label:
        cout<<"enter a positive number to see code tamers pattern: ";
        cin>>n;
    if(n<=0) {
        cout<<"please enter a positive number!\n";
        goto label;
    }
    cout<<endl;
}

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
    if(n!=0)
        cout<<endl;

    if(n==0) //base case
        return ' ';
    return upper(n-1, i+1);
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

void display() {
    int num;
    input(num);
    cout<<upper(num);
    cout<<endl;
    cout<<lower(num);
}
