//a c++ program that accept arrays of element and print the sum of the first and last elements
//a program that accepts an array and it print the sum of its first and last elements
#include <iostream>
using namespace std;

//prototype
void sumPt(int arr[]);

int n; //declaring a global variable

int main() {
    cout<<"enter the number of elements you want: ";
    cin>>n;
    int arr[n];
    sumPt(arr);
}

//function definition
void sumPt(int arr[]) {
    cout<<"enter the elements of the array: \n";
    for(int i=0;i<n;++i)
        cin>>arr[i];
    int sum=arr[0] + arr[n-1];
    cout<<"The sum of the last two elements is: "<<sum;
}
