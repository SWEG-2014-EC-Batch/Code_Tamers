#include "header.h"

ItemInfo itemTemp;

void Insertion()
{
    string Prod_name;
    int choice;
    cout<<"Select a catagory:\n";
    for(int i=0;i<Category.size();i++)
    {
        cout<<i+1<<". "<<Category[i]<<endl;
    }
    cout<<"->";
    cin>>choice;

    while (true)
    {
        if (choice!=0)
        {
            cout<<"Enter the product name:\n->";
            cin>>Prod_name;

            cout<<"Enter the number of "<<Prod_name<<" purchased: ";
            cin>>itemTemp.numPurchased;

            cout<<"Enter the price of "<<Prod_name<<" when purchased: ";
            cin>>itemTemp.pricePurchased;

            cout<<"Enter the number of "<<Prod_name<<" sold: ";
            cin>>itemTemp.numSold;

            cout<<"Enter the price of "<<Prod_name<<" when sold: ";
            cin>>itemTemp.priceSold;
    
            cout<<endl;
            
            vecStore[month][Category[choice-1]][Prod_name]=itemTemp;

            save_data();
            
            for(int i=0;i<Category.size();i++)
            {
                cout<<i+1<<". "<<Category[i]<<endl;
            }
            cout<<"Enter 0 to go back to menu\n->";
            cin>>choice;
        }

        else if (choice==0)
        {
            Menu();
        }
    }
    
}