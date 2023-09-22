#include<iostream>
using namespace std;
void input(int& hour, int& minute){
     cout<<"enter in 24hr format(HH MM) :";
     cin>>hour>>minute;
}
void convert(int& hour, char& am_pm){
    if (hour<12){
        am_pm = 'A';
    }
    else{
        am_pm = 'P';
        hour -= 12;
    }
    if(hour == 0){
        hour = 12;
    }


}
void output(int hour, int minute, char am_pm){
    cout<<"The time in 12hr format is "<<hour<<":"<<minute;
    if(am_pm == 'A'){
        cout<<"AM";
    }
    else{
        cout<<"PM";
    }
}

int main(){
    int hour, minute;
    char am_pm;
    char choice = 'Y';
    while(choice == 'Y' || choice == 'y'){
        input(hour, minute);
        convert(hour, am_pm);
        output(hour, minute, am_pm);
        cout<<endl<<"do you want to continue: ";
        cin>>choice;


    }

}
