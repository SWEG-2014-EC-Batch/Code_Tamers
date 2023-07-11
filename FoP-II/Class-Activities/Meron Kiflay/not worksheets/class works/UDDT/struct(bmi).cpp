#include <iostream>
using namespace std;
struct person
{
    char name[50];
    char gender;
    int age;
    float weight;
    float height;
    float bmi;
}p;
float bmi(person g);
void res(person g);
int main()
{
    cout<<"name: ";
    cin.getline(p.name,50);
    cout<<"gender f or m: ";
    cin>>p.gender;
    cout<<"age: ";
    cin>>p.age;
    cout<<"weight: ";
    cin>>p.weight;
    cout<<"height: ";
    cin>>p.height;
    p.bmi=bmi(p);
    cout<<endl;
    res(p);
}
float bmi(person g)
{
    return((g.weight)/(g.height*g.height));
}
void res(person g)
{
    cout<<"name: "<<g.name<<" gender: "<<g.gender<<" age: "<<g.age;
    if(g.gender='f'){
        if(g.bmi<=18){
            cout<<"your bmi is: "<<g.bmi<<", you are under weight.";
        }
        else if(g.bmi<=23 && g.bmi>18){
            cout<<"\nyour bmi is: "<<g.bmi<<", you are normal.";
        }
       else if(g.bmi>23){
        cout<<"your bmi is: "<<g.bmi<<", you are overweight.";
       }
    }
   else if(g.gender='m'){
        if(g.bmi<=20){
            cout<<"your bmi is: "<<g.bmi<<", you are under weight.";
        }
        else if(g.bmi<=25 && g.bmi>20){
            cout<<"your bmi is: "<<g.bmi<<", you are normal.";
        }
       else if(g.bmi>25){
        cout<<"your bmi is: "<<g.bmi<<", you are overweight.";
       }
   }
}
