#include <iostream>
using namespace std;
void swapvals(int &a,int &b,int &c)
{
    cout<<"before swap"<<endl;
    cout<<"a: "<<a<<" b: "<<b<<" c: "<<c;
    int arr[3]={a,b,c};
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            if (arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        if(arr[0]>=arr[1]&& arr[1]>=arr[2]){break;}
    }
    a=arr[0];
    b=arr[1];
    c=arr[2];
    cout<<endl<<"after swap"<<endl;
    cout<<"a: "<<a<<" b: "<<b<<" c: "<<c;
}
int main()
{
    int x,y,z;
    cout<<"enter three integers: "<<endl;
    cin>>x>>y>>z;
    swapvals(x,y,z);
}
