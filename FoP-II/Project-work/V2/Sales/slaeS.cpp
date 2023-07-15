#include <iostream>
#include <fstream>
using namespace std;
struct sales
{
    float product[5];
    float s_total,bonus;
}emp[4];
fstream sale;
void write();
void dispay_t();
void display_product(int num);
void display_sales_p(int sales_p);
void read_and_display();
float grand_sum(sales);
float product_sum(sales,int num);


int main()
{
     write();
     read_and_display();
}

void write()
{
    int sales_p, prod;
    double amount;

    // Open the file for writing
    sale.open("sales.txt", ios::out);

    while (true) {
        cout << "Enter salesperson number (1 to 4, 0 to quit): ";
        cin >> sales_p;
        if (sales_p == 0) {
            break;
        }
        cout << "Enter product number (1 to 5): ";
        cin >> prod;
        cout << "Enter total Birr value of product sold: ";
        cin >> amount;

        // Write data to file
        sale << sales_p << ' ' << prod << ' ' << amount << '\n';
    }

    // Close the file
    sale.close();
}
