#include <iostream>
using namespace std;
int sum(int arr[],int s)
{
    if (s==1){return arr[0];}
    else{return arr[s-1]+sum(arr,s-1);}
}

int main()
{
    int arr1[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"sum of the array elements: "<<sum(arr1,10);
}
