#include<iostream>
using namespace std;
const int NUM_SALESPERSONS = 4;
const int NUM_PRODUCTS = 5;

void input(double sales[NUM_SALESPERSONS][NUM_PRODUCTS]);
void display_product(int product, double sales[NUM_SALESPERSONS][NUM_PRODUCTS]);

int main(){
    double sales[NUM_SALESPERSONS][NUM_PRODUCTS]= {0};
    input(sales);

}

void input(double sales[NUM_SALESPERSONS][NUM_PRODUCTS]){
    int salesperson, product;
    float amount;

    while(true){
        cout<<"Enter sales person number(1 up to 4 and 0 to quit): ";
        cin>>salesperson;
            if(salesperson == 0){
                    break;}
        cout<<"Enter product number(1 up to 5): ";
        cin>>product;
        cout<<"Enter amount: ";
        cin>>amount;
        sales[salesperson-1][product-1] += amount;
    }

    char c_sp, c_d;//c_d is the choice of display and c_sp is the choice of salesperson or product
    cout<<",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n";
    cout<<"enter \'a\' or \'A\' if you want a summary table.\nor\n ";
    cout<<"enter \'b\' or \'B\' if you want to search for a particular product or salesperson record.\n";
    cout<<",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n-->";
    cin>>c_d;
    cout<<endl;

    if(c_d == 'a' or c_d == 'A'){
            display_t(sales);

    }
    else if(c_d == 'b' or c_d == 'B'){
        char s_p;//s_p is salesperson or product
        cout<<"enter \'x\' or \'X\' if you want to know about a particular product.\nor\n";
        cout<<"enter \'y\' or \'Y\' if you want to know about a particular sales person.\n-->";
        cin>>s_p;


        if (s_p=='x' || s_p=='X'){
            int product;
            cout<<"which product would you like to know about?\n";
            cout << "Enter product number (1 to 5): ";
            cin >> product;
            cout<<"_ _ _\n\n";
            cout<<"the details for product"<<product<<" are:\n";
            display_product(product, sales);
            double sp_total= product_total(product, sales);
            cout<<"total amount of product "<<product<<" sold= "<<sp_total<<"ETB";
            cout<<"\n_ _ _";

        }

        else{
            //display_person(sales);
            int salesperson;
            cout<<"which salesperson would you like to know about?\n";
            cout << "Enter salesperson number (1 to 4): ";
            cin >> salesperson;
            cout<<"_ _ _\n\n";
            cout<<"salesperson "<<salesperson<<" got the following amount from each product:\n";
            for(int product=1;product<=NUM_PRODUCTS;product++){
                double pn = sales[salesperson-1][product-1];//pn is product number
                cout<<"product "<<product<<" total="<<pn<<"ETB"<<endl;
             }

            double pn_total = salesperson_total(salesperson,sales);
            cout<<"total value of product sold by salesperson"<<salesperson<<"= "<<pn_total<<"ETB\n";
            double bonus = 0.05*pn_total;
            cout<<"salesperson "<<salesperson<<" got a bonus of: "<<bonus;
            cout<<"\n_ _ _";
            }
        }
    }
double product_total(int product, double sales[NUM_SALESPERSONS][NUM_PRODUCTS]){

         double product_t=0;
         for (int salesperson = 1; salesperson <= NUM_SALESPERSONS; salesperson++) {
             product_t += sales[salesperson - 1][product - 1];
         }
         return product_t;
}

void display_t(double sales[NUM_SALESPERSONS][NUM_PRODUCTS]){
    double grand_total = 0;
    cout<<"-------------------------------------------------------------------------------------------------\n";
    cout << "Salesperson"<<"\t";


    for (int product = 1; product <= NUM_PRODUCTS; product++) {
         cout << "Product " << product<<"\t";
     }
     cout << "Total"<<"\t\t" << "Bonus" << endl;


    for (int salesperson = 1; salesperson <= NUM_SALESPERSONS; salesperson++) {
            cout << salesperson <<"\t\t";

            for (int product = 1; product <= NUM_PRODUCTS; product++) {
                double sales_amount = sales[salesperson - 1][product - 1];
                cout << sales_amount<<"\t\t";}

                double total_sales = salesperson_total(salesperson, sales);
                grand_total +=total_sales;

                cout<<total_sales<<"\t\t";

                double bonus = 0.05 * total_sales;
                cout << bonus << endl;

    }

    // Print row cross totals
    cout << "Total"<<"\t\t";
    for (int product = 1; product <= NUM_PRODUCTS; product++){
        cout << product_total(product, sales)<<"\t\t";
    }

    cout << grand_total << endl;
     cout<<"--------------------------------------------------------------------------------------------------\n";

}

void display_product(int product, double sales[NUM_SALESPERSONS][NUM_PRODUCTS]) 
{
    for(int salespersonw=1;salesperson<=NUM_SALESPERSONS;++salesperson) 
    {
        double sp=slaes[salesperson-1][product-1]; //sp is each salesperson's value of the product sold
        cout<<"sales person "<<salesperson<<" total="<<sp<<"ETB"<<endl;
    }
}

