#include <iostream>
using namespace std;
void fun(int arr[],int s);
int main()
{
    int arr1[10]={1,2,3,4,5};
    fun(arr1,5);
    return 0;
}
void fun(int arr[],int s)
{
  cout<<"the first element: "<<arr[0]<<" the last element: "<<arr[s-1]<<endl;
  cout<<"their sum: "<<arr[0]+arr[s-1];
}
