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



void display_product(int num)
{
    for(int sp=0;sp<4;sp++)
        {
        cout<<"sales person "<<sp+1<<" total="<<emp[sp].product[num-1]<<"ETB"<<endl;
    }
}

void display_sales_p(int sales_p)
{
    for(int pr=0;pr<5;pr++){
                cout<<"product "<<pr+1<<" total="<<emp[sales_p-1].product[pr]<<"ETB"<<endl;
             }
            cout<<"total value of product sold by salesperson"<<sales_p<<"= "<<emp[sales_p-1].s_total<<"ETB\n";
            emp[sales_p-1].bonus = 0.05 * emp[sales_p-1].s_total;
            cout<<"salesperson "<<sales_p<<" got a bonus of: "<<emp[sales_p-1].bonus;
            cout<<"\n_ _ _";
}
