//this program converts scales from feets and inches to meter and centimeter
#include <iostream>
using namespace std;

//prototype of the input function
void inputLength(double& feet, double& inches);

//prototype of the calculating function
void calculateLength(double feet, double inches, double& meters, double& centimeters);

//prototype of the output printing function
void outputLength(double feet, double inches, double meters, double centimeters);

int main() {
    double feet, inches, meters, centimeters;
    char check;
    do {
        inputLength(feet, inches);
        calculateLength(feet, inches, meters, centimeters);
        outputLength(feet, inches, meters, centimeters);
        cout<<"\nDo you want to continue the calculation? (Y/N)\n";
        cin>>check;
    }while(check == 'Y' || check == 'y');

    system("pause");
    return 0;
}


//defining function for input function
void inputLength(double& feet, double& inches) {
    cout<<"Enter length in feet: ";
    cin>>feet;
    cout<<"Enter the length in inches: ";
    cin>>inches;
}

//defining the function that do the calculation
void calculateLength(double feet, double inches, double& meters, double& centimeters) {
    meters = feet * 0.3048;
    centimeters = inches * 2.54;
}

//defining the function that prints the output
void outputLength(double feet, double inches, double meters, double centimeters) {
    cout<<feet<<" feet "<<inches<<" inches is equivalent to "<<meters<<" meter and "<<centimeters<<" centimeters.";
}