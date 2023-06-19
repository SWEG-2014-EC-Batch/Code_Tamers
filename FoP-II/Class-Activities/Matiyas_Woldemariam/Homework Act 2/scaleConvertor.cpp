//this program converts scales from feets and inches to meter and centimeter
#include <iostream>
using namespace std;

//prototype of the input function
void inputLength(double& feet, double& inches, double& meters, double& centimeters, int& choice);

//prototype of the calculating function
void calculateLength(double& feet, double& inches, double& meters, double& centimeters, int& choice);

//prototype of the output printing function
void outputLength(double feet, double inches, double meters, double centimeters, int choice);

int main() {
    int choice;
    double feet, inches, meters, centimeters;
    char check;
    do {
        inputLength(feet, inches, meters, centimeters, choice);
        calculateLength(feet, inches, meters, centimeters, choice);
        outputLength(feet, inches, meters, centimeters, choice);
        cout<<"\n\nDo you want to continue the calculation? (Y/N)\n";
        cin>>check;
    }while(check == 'Y' || check == 'y');

    return 0;
}


//defining function for input function
void inputLength(double& feet, double& inches, double& meters, double& centimeters, int& choice) {
    cout<<"Enter the type of conversion you want: \n1. feet and inches to meter and cm \n2. meter and cm to feet and inches\n->";
    cin>>choice;
    switch(choice) {
        case 1:
            cout<<"Enter length in feet: ";
            cin>>feet;
            cout<<"Enter the length in inches: ";
            cin>>inches;
        break;
        case 2:
            cout<<"Enter length in meter: ";
            cin>>meters;
            cout<<"Enter length in cm: ";
            cin>>centimeters;
    }

}

//defining the function that do the calculation
void calculateLength(double& feet, double& inches, double& meters, double& centimeters, int& choice) {
    if (choice==1) {
    meters = feet * 0.3048;
    centimeters = inches * 2.54;
    }
    else if (choice==2) {
        feet = meters / 0.3048;
        inches = centimeters / 2.54;
    }
}

//defining the function that prints the output
void outputLength(double feet, double inches, double meters, double centimeters, int choice) {
    if (choice==1)
        cout<<feet<<" feet "<<inches<<" inches is equivalent to "<<meters<<" meter and "<<centimeters<<" centimeters.";
    else if (choice==2)
        cout<<meters<<" meter "<<centimeters<<" centimeter is equivalent to "<<feet<<" feet and "<<inches<<" inches."; 
}