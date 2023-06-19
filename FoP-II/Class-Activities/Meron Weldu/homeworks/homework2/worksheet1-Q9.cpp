#include<iostream>
using namespace std;
void swapValues(int& n1, int& n2, int& n3);
int main(){
    int x, y, z;
    cout<<"Enter three numbers: ";
    cin>>x>>y>>z;
    cout<<"Before swapping : "<<x<<" "<<y<<" "<<z<<endl;
    swapValues(x,y,z);
}
void swapValues(int& n1, int& n2, int& n3){
     if(n1< n2){
        int temp = n1;
        n1 = n2;
        n2 = temp;
     }
     if(n2< n3){
        int temp = n2;
        n2 = n3;
        n3 = temp;
     }
     if(n1< n3){
        int temp = n1;
        n1 = n3;
        n3 = temp;
     }
     cout<<"After swapping : "<<n1<<" "<<n2<<" "<<n3<<endl;
     }
