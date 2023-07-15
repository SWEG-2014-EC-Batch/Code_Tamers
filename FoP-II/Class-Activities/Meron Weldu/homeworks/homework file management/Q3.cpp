
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Customer {
    int accountNumber;
    string firstName;
    string lastName;
    double accountBalance;
};

void createCustomerFile();
void displayCustomerInfo(int accountNumber);

int main() {
    createCustomerFile();

    cout << "Enter account number: ";
    int accountNumber;
    cin >> accountNumber;

    displayCustomerInfo(accountNumber);

    return 0;
}


void createCustomerFile() {
    ofstream file("customer_records.txt");
    if (file.is_open()) {
        for (int i = 0; i < 5; ++i) {
            Customer customer;
            customer.accountNumber = 1000 + i;

            cout << "Enter first name for account #" << customer.accountNumber << ": ";
            cin >> customer.firstName;

            cout << "Enter last name for account #" << customer.accountNumber << ": ";
            cin >> customer.lastName;

            cout << "Enter account balance for account #" << customer.accountNumber << ": ";
            cin >> customer.accountBalance;

            file << customer.accountNumber << " " << customer.firstName << " " << customer.lastName << " " << customer.accountBalance << endl;
        }
        file.close();
}
}

void displayCustomerInfo(int accountNumber) {
    ifstream file("customer_records.txt");
    if (file.is_open()) {
        Customer customer;
        while (file >> customer.accountNumber >> customer.firstName >> customer.lastName >> customer.accountBalance) {
            if (customer.accountNumber == accountNumber) {
                cout << "Account Number: " << customer.accountNumber << endl;
                cout << "Name: " << customer.firstName << " " << customer.lastName << endl;
                cout << "Account Balance: $" << customer.accountBalance << endl;
                file.close();
                return;
            }
        }
        file.close();
        cout << "Account number not found." << endl;
    }
}
