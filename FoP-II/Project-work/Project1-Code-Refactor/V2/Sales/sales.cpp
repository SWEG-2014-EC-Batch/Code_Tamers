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

float grand_sum(sales e[])
{
    float tot=0;
    for (int i=0;i<4;i++)
    {
        tot+=e[i].s_total;
    }
    return (tot);
}

float product_sum(sales e[],int num)
{
    float tot=0;
    for (int i=0;i<4;i++)
    {
        tot+=e[i].product[num];
    }
    return (tot);
}

void display_t()
{
    cout<<"-------------------------------------------------------------------------------------------------\n";
    cout << "Salesperson"<<"\t";


    for (int prod=0;prod<5;prod++)
     {
         cout << "Product " <<prod+1<<"\t";
     }
     cout << "Total"<<"\t\t" << "Bonus" << endl;


    for (int sp=0;sp<4;sp++)
        {
            cout << sp+1 <<"\t\t";

            for (int pr=0; pr < 5; pr++) {
                cout << emp[sp].product[pr]<<"\t\t";}

                cout<<emp[sp].s_total<<"\t\t";

                emp[sp].bonus = 0.05 * emp[sp].s_total;
                cout << emp[sp].bonus << endl;

        }

    // Print row cross totals
    cout << "Total"<<"\t\t";
    for (int pr = 0; pr < 5; pr++)
        {
        cout << product_sum(emp,pr)<<"\t\t";
        }

    cout << grand_sum(emp) << endl;
     cout<<"--------------------------------------------------------------------------------------------------\n";

}

 void read_and_display()
{
    int sales_p, prod;
    double amount;

    // Open the file for reading
    sale.open("sales.txt", ios::in);

    // Read data from file
    while (sale >> sales_p >> prod >> amount) {
        // Update sales array
        emp[sales_p-1].product[prod-1] += amount;
        emp[sales_p-1].s_total += amount;
    }
    // Close the file
    sale.close();

    char c_d;//c_d is the choice of display
    cout<<",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n";
    cout<<"enter \'a\' or \'A\' if you want a summary table.\nor\n ";
    cout<<"enter \'b\' or \'B\' if you want to search for a particular product or salesperson record.\n";
    cout<<",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n-->";
    cin>>c_d;
    cout<<endl;

    if(c_d == 'a' or c_d == 'A'){
            display_t();

    }
    else if(c_d == 'b' or c_d == 'B'){
        char s_p;//s_p is salesperson or product
        cout<<"enter \'x\' or \'X\' if you want to know about a particular product.\nor\n";
        cout<<"enter \'y\' or \'Y\' if you want to know about a particular sales person.\n-->";
        cin>>s_p;


        if (s_p=='x' || s_p=='X'){
            int prod;
            cout<<"which product would you like to know about?\n";
            cout << "Enter product number (1 to 5): ";
            cin >> prod;
            cout<<"_ _ _\n\n";
            cout<<"the details for product"<<prod<<" are:\n";
            display_product(prod);
            cout<<"total amount of product "<<prod<<" sold= "<<product_sum(emp,prod-1)<<"ETB";
            cout<<"\n_ _ _";

        }

        else{
            //display_person(sales);
            int sales_p;
            cout<<"which salesperson would you like to know about?\n";
            cout << "Enter salesperson number (1 to 4): ";
            cin >> sales_p;
            cout<<"_ _ _\n\n";
            cout<<"salesperson "<<sales_p<<" got the following amount from each product:\n";
            display_sales_p(sales_p);
            }
        }
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
