#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct Person {
    string name;
    string gender;
    int age;
    float weight;
    float height;
    float bmi;
};

// Function to calculate BMI
float calculateBMI(float height, float weight);

int main() {
    int num;
    cout << "Enter the number of people you want to calculate for: ";
    cin >> num;

    Person people[num];

    for (int i = 0; i < num; ++i) {
        cout << "\n*****************\nFor person " << i + 1 << ":\n";
        cin.ignore();
        cout << "Enter your name: ";
        getline(cin, people[i].name);
        cout << "Enter your gender: ";
        cin >> people[i].gender;
        cout << "Enter your age: ";
        cin >> people[i].age;
        cout << "Enter your weight (in kg): ";
        cin >> people[i].weight;
        cout << "Enter your height (in meters): ";
        cin >> people[i].height;
    }

    // Display the tabulated data
    cout << "\n\n" << setw(100) << "Tabulated Data:\n\n";
    cout << setw(40) << "Name" << setw(15) << "Gender" << setw(15) << "Age" << setw(15) << "Weight" << setw(15) << "Height" << setw(15) << "BMI\n";
    cout << setw(25) << "\n\n";

    for (int i = 0; i < num; ++i) {
        people[i].bmi = calculateBMI(people[i].height, people[i].weight);
        cout << setw(40) << people[i].name << setw(15) << people[i].gender << setw(15) << people[i].age << setw(15) << people[i].weight << setw(15) << people[i].height << setw(15) << people[i].bmi << endl;
    }

    return 0;
}

float calculateBMI(float height, float weight) {
    return weight / pow(height, 2);
}
