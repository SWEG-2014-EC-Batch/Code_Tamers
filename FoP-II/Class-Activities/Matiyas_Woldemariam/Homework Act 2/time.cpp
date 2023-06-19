#include<iostream>
using namespace std;
bool want_continue();
void input(int& hour, int& minute);
void convert(int& hour, int& minute,  char& ampm);
void output(int hour, int minute, char ampm);
int main(){
    int hour, minute;
    char ampm;
    do{
        input(hour,minute);
        convert(hour, minute, ampm);
        output(hour, minute, ampm);
    }while(want_continue());
}
void input(int& hour, int& minute){
    cout<<"Input the hour: ";
    cin>>hour;
    cout<<"Input the minute: ";
    cin>>minute;
}
void convert(int& hour, int& minute, char& ampm){
    if (hour == 0){
        hour = 12;
        ampm = 'A';
    }
    else if(hour > 12){
        hour = abs(hour-12);
        ampm = 'P';}
    else if(hour == 12){
        ampm = 'p';
        }
    else{
        ampm = 'A';
    }
}
void output(int hour, int minute, char ampm){
    cout<<"The time in 12 hour notation is "<<hour<<":"<<minute<<" "<<ampm<<"M"<<endl;
    }
bool want_continue(){
    char choice;
    while (true){
        cout<<"Do you want to continue: \n \"Y\" to continue and anything else to stop: ";
        cin>> choice;
        return (choice == 'Y' || choice == 'y');}
}