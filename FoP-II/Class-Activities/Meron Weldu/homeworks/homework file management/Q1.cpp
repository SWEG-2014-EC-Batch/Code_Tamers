#include<iostream>
#include<fstream>
using namespace std;

void readfile(const char* file,int arr[],int* count ){
    ifstream f(file);
    if(f){
        *count = 0;
        while (f >> arr[*count]){
            (*count)++;
        }
        f.close();
    }
}

int main(){
    const char* file = "myfile.txt";
    int arr[100];
    int count;
    readfile(file, arr, &count);
    for(int i=0;i<count;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
