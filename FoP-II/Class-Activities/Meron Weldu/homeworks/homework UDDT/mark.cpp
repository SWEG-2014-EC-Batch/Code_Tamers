#include<iostream>
#include<string>
using namespace std;
struct students{
    string name, id;
    float testMark, finalMark;
    float sum(){
    return  testMark + finalMark;
    }

}student[10];

int main(){
    cout<<"You can calculate maximum up to 10 students."<<endl;
    int i=0;
    char choice;

    do {
    cout<<"Enter the Name: "<<endl;
    getline(cin,student[i].name);
    cout<<"Student ID: "<<endl;
    getline(cin,student[i].id);
    cout<<"Student test mark: "<<endl;
    cin>>student[i].testMark;
    cout<<"Final mark: "<<endl;
    cin>>student[i].finalMark;
    cout<<"Do you want to continue: \'y\' :YES or \'n\' : NO: ";
    cin>>choice;
    cin.ignore();
    i++;
    }while(choice== 'y' && i<10);


    cout<<"\nStudent Name"<<"\t"<<"Student ID"<<"\t"<<"Test Mark"<<"\t"<<"Final Mark"<<"\t"<<"Total sum"<<endl;

    for(int j=0; j<i; j++){
        cout<<student[j].name<<"\t\t"<<student[j].id<<"\t\t"<<student[j].testMark<<"\t"<<"\t"<<student[j].finalMark<<"\t"<<"\t"<<student[j].sum()<<endl;
        }

}
