#include <iostream>
using namespace std;
void welcome();

int main(){
    welcome();
}
void welcome(){
    string name;
    cout<<"what is your name?"<<endl;
    cin>>name;
    cout<<"Hello "<<name<<" this is modular programing.";
}
