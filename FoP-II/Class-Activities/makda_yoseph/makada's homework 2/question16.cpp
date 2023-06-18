#include <iostream>
using namespace std;
void entery(int&,int&);
void convert(int&,int&,char&);
void output(int,int,char&);
int main(){
    int hr,min;
    char c;
    string want;
    do{entery(hr,min);
    convert(hr,min,c);
    output(hr,min,c);
    cout<<"do you want to continue "<<endl;
    cin>>want;

    }while(want == "yes");
}
void entery(int &h,int &m){
    cout<<"enter the hour"<<endl;
    cin>>h;
    cout<<"enter the minute"<<endl;
    cin>>m;
    
}
void convert(int &h,int &m,char &c){
    
    int t;
    if (h == 0 ||( h>=1 && h<=11)){
        t = h;
        c = 'A';
    }
    else if( h == 12){
        t = h;
        c = 'P';
        
    }
    else if( h >=13 && h<=23){
        t= abs(h -12);
        c = 'p';
    }
}
void output(int hr,int min, char &c){
    cout<<"Your time is  "<<hr<<":"<<min<<c<<endl;
}
