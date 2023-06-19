#include<iostream>
using namespace std;
const double meter_per_foot = 0.3048;
const double centi_per_meter = 100;
const double inches_per_foot = 12;
bool want_continue();
void input(double& feet, double& inches);
void calc(double feet, double inches, double& meters, double& centi);
void output(double feet, double inches, double meters, double centi);
int main(){
    double feet, inches, meters, centi;
    do{
        input(feet, inches);

        calc(feet, inches, meters, centi);

        output(feet, inches, meters, centi);
    }while (want_continue());
    return 0;
}
void input(double& feet, double& inches){

    cout<<"Enter your height in feet and inches: "<<endl;
    cout<<"In feet: "<<endl;
    cin>>feet;
    cout<<"In inches: "<<endl;
    cin>>inches;
    }
void calc(double feet, double inches, double& meters, double& centi){
    meters = (feet + inches/inches_per_foot) * meter_per_foot;
    centi = meters * centi_per_meter;
}
void output(double feet, double inches, double meters, double centi){
    cout<<feet<<" feet and "<<inches<<" inches is equal to ";
    cout<<meters<<" meters and "<<centi<<" centimeters."<<endl;
}
bool want_continue(){
    char choice;
    while (true){
        cout<<"DO YOU WANT TO CONTINUE: "<<endl;
        cout<<"\"Y\" for continue and anything else for stop: ";
        cin>>choice;
        return (choice == 'Y' || choice == 'y');

    }

}
