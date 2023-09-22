#include<iostream>
using namespace std;
void swap(int &n1, int &n2, int &n3);
int main(){
    int num1 = 4, num2 = 7, num3 = 1;
    cout<<"The Three numbers before swapping "<<num1<<' '<<num2<<' '<<num3<<endl;
    swap(num1, num2,num3);
    cout<<"The Three numbers after swapping "<<num1<<' '<<num2<<' '<<num3<<endl;
    return 0;
}

void swap(int &n1, int &n2, int &n3){
    if (n1<n2){
        swap(n1,n2);
    }
    if (n1<n3){
        swap(n2,n3);
    }
    if (n2<n3){
        swap(n2,n3);
    }

}
