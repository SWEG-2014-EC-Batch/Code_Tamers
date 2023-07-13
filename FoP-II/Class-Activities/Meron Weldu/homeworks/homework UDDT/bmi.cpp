#include<iostream>
#include<string>
using namespace std;
double calc(double height, double weight);
string check(double bmi);
struct person{
    string name;
    char gender;
    int age;
    double weight, height;
} ;

int main(){
    person input;
    cout<<"Enter your name: "<<endl;
    getline(cin, input.name);
    cout<<"Enter your gender: \'f\' for female and \'m\' for male "<<endl;
    cin>>input.gender;
    cout<<"Enter your age: "<<endl;
    cin>>input.age;
    cout<<"Enter your height in cm: "<<endl;
    cin>>input.height;
    cout<<"Enter your weight in kg: "<<endl;
    cin>>input.weight;

    double bmi = calc(input.height, input.weight);
    string detail = check(bmi);


    cout<<"Your BMI is "<<bmi<<". "<<detail;

}


double calc(double height, double weight){
    double bmi = weight / (height *height);
    return bmi;
}


string check(double bmi){
    string detail;
    if (bmi < 18.5){
        detail = "You are Underweight.";}
    else if (25<bmi && bmi<=35){
        detail = "YOu are Overweight.";
    }
    else if (bmi>35){
        detail = "You are Obese.";
    }
    else{
        detail = "You are Normal weight.";
    }
    return detail;


}




