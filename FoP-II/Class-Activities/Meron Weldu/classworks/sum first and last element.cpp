#include<iostream>
using namespace std;
double maxSum(double arr[], int n){
    double sum;
    sum = arr[0] + arr[n-1];
    return sum;

}
int main(){
    int n;
    cout<<"Input the length of the array: ";
    cin>>n;
    double num, arr[n]={}, sum;
    for(int i=0; i<n; i++){
        cout<<"Enter the number: ";
        cin>>num;
        arr[i] = num;
    }

    cout<<"The sum of the first and last element is "<<maxSum(arr, n);
    return 0;
}
