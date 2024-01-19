#include <iostream>
#include <iomanip>
#include "functions.h"
using namespace std;

void menu() {
    int choice, quant;
    string itName, catName;
    double purchaseP, sellingP;
    cout<<setw(40)<<"=== Welcome To Tamers Supermarket Management System ===\n\n";
    do
    {
        label:
            cout<<setw(20)<<"--Menu--\n1.Insert or update item\n2.Sell item\n3.Item rating\n4.Item ranking\n5.Display categories and items\n6.Quit\n"<<setw(20)<<"Enter your choice: "; cin>>choice;
            switch (choice)
            {
            case 1:
                cout<<setw(30)<<"\n..Inserting or Updating item..\n";
                cout<<setw(20)<<"Enter the name of category you want to insert into: "; cin>>catName;
                cout<<setw(20)<<"Enter the name of item you wanted to insert or update: "; cin>>itName;
                cout<<setw(20)<<"Enter the purchase price: "; cin>>purchaseP;
                cout<<setw(20)<<"Enter the selling price: "; cin>>sellingP;
                cout<<setw(20)<<"Enter the quantity: "; cin>>quant;
                insertOrUpdateItem(catName, itName, purchaseP, sellingP, quant);
                break;
            
            case 2:
                cout<<setw(30)<<"\n..Selling Item..\n";
                cout<<setw(20)<<"Enter the category of item to be sold: "; cin>>catName;
                cout<<setw(20)<<"Enter the name of item to be sold: "; cin>>itName;
                Sell_item(catName, itName);
                break;
            case 3:
                cout<<setw(30)<<"\n..Item Rating..\n";
                cout<<setw(20)<<"Enter the item name for rating calculation: "; cin>>itName;
                cout<<setw(20)<<"The rating of the item "<<itName<<" is: "<<rating(itName);
                break;
            }
            case 4:
                cout<<setw(30)<<"..Item Ranking..\n";
                unordered_map<string, Item*> categories;
                cout<<setw(20)<<"Enter the name of category: "; cin>>catName;
                ranking(categories, catName);
                break;
            case 5:
                cout<<setw(30)<<"..Display..\n";
                cout<<setw(20)<<"The available categories are:\n";
                displaY();
                cout<<setw(20)<<"Enter the category name so that you can see the available items: "; cin>>catName;
                displaY(catName);
            case 6:
                break;
            default:
                goto label;
    } while (choice!=6);
    
    

}

