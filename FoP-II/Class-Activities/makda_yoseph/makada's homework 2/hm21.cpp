#include <iostream>
using namespace std;
void swap(int*,int*,int*);
int main(){
    int num1 =4,num2=5,num3=3;
    cout<<"before swapping or calling our swap function"<<endl;
    cout<<num1<<"\n"<<num2<<"\n"<<num3<<"\n";
    cout<<"after swapping the numbers...."<<endl;
    swap(&num1,&num2,&num3);
    cout<<num1<<"\n"<<num2<<"\n"<<num3<<"\n";

}
void swap(int* a,int* b,int* c){
    int numg, numd;
    if (*a > *b && *b> *c ){
        *a = *a;
        *b= *b;
        *c= *c;
    }
    else if (*b> *a && *a>*c){
        numg = *a;
        *a = *b;
        *b= numg;
    }
    else if(c>a && a>b){
        numg = *a;
        *a= *c;
        numd= *b;
        *b= numg;
        *c= numd;
    }
}
