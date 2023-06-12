#include <iostream>
#include <cmath>
using namespace std;
bool prime(int num);

int main()
{
    int num;
    cout<<"enter the number u want to check: ";
    cin>>num;
    cout<<prime(num);
}
bool prime(int num)
{
    bool res=true;
    for(int i=2;i<=int(sqrt(num));i++){
        if (num%i==0){
            res=false;
            break;
        }
    }
    return res;
}
