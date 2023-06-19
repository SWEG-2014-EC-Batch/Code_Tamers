
#include <iostream>
using namespace std;

void input(double &val1, double &val2, int &choice);

void convert(double &val1, double &val2, int &choice);

void output(double &val1, double &val2, int &choice);

int main() {
    double x, y;
    int z;
    input(x, y, z);
}

void input(double &val1, double &val2, int &choice) {
    while(choice!=0) {
        cout<<"Choose 1 for converting feet and inches to meters and centimeters\nChoose 2 for converting meter and centimeter to feet and inches\nEnter 0 to exit"<<endl;
        cin>>choice;
        switch(choice) {
            case 1:
                cout<<"Enter the length in feet in inches\n";
                cin>>val1>>val2;
                cout<<"\nThe respective meter and centimeters are: ";
                convert(val1, val2, choice);
                output(val1, val2, choice);

            break;
            case 2:
                cout<<"Enter the length in meter and centimeter\n";
                cin>>val1>>val2;
                convert(val1, val2, choice);
                output(val1, val2, choice);
            break;
        }
    }
}

void convert(double &val1, double &val2, int &choice) {
    if (choice==1) {
        val1 = val1 * 0.3048;
        val2 = val2 * 2.54;
    }
    else if (choice==2) {
        val1 = val1 * 3.2808;
        val2 = val2 * 0.393;
        cout<<val1<<" "<<val2;
    }
}

void output(double &val1, double &val2, int &choice) {
    if (choice==1) {
        cout<<"\nThe respective meter and centimeters are: ";
        cout<<val1<<" "<<val2;
    }
    else if (choice==2) {
        cout<<"\nThe respective feet and inches are: ";
        cout<<val1<<" "<<val2;
    }
}