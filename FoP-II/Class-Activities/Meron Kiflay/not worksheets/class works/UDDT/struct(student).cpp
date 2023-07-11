#include <iostream>
using namespace std;
struct student
{
    char id[50],name[50];
    float test[3];
    float fin;
    float results;
}students[3];

int main()
{
    int i=0;
    while(i<3)
    {
        cout<<"enter the details of student "<<i+1<<endl;
        cout<<"enter the id: ";
        cin.ignore();
        cin.getline(students[i].id,15);
        cout<<"enter the student's name: ";
        cin.getline(students[i].name,15);
        cout<<"enter the test results: "<<endl;
        students[i].results=0;
        for (int j=0;j<3;j++)
        {
            cin>>students[i].test[j];
            students[i].results+=students[i].test[j];
        }
        cout<<"enter the final results: ";
        cin>>students[i].fin;
        students[i].results+=students[i].fin;
        cout<<endl;
        i++;
    }
    for(int i=0;i<3;i++)
    {
        cout<<"student "<<i+1<<" id: "<<students[i].id<<" name: "<<students[i].name<<" result: "<<students[i].results<<"/100\n";
    }

    return 0;
}
#include <iostream>
using namespace std;
struct student
{
    char id[50],name[50];
    float test[3];
    float fin;
    float results;
}students[3];

int main()
{
    int i=0;
    while(i<3)
    {
        cout<<"enter the details of student "<<i+1<<endl;
        cout<<"enter the id: ";
        cin.ignore();
        cin.getline(students[i].id,15);
        cout<<"enter the student's name: ";
        cin.getline(students[i].name,15);
        cout<<"enter the test results: "<<endl;
        students[i].results=0;
        for (int j=0;j<3;j++)
        {
            cin>>students[i].test[j];
            students[i].results+=students[i].test[j];
        }
        cout<<"enter the final results: ";
        cin>>students[i].fin;
        students[i].results+=students[i].fin;
        cout<<endl;
        i++;
    }
    for(int i=0;i<3;i++)
    {
        cout<<"student "<<i+1<<" id: "<<students[i].id<<" name: "<<students[i].name<<" result: "<<students[i].results<<"/100\n";
    }

    return 0;
}
