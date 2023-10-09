#include "header.h"

void Menu() 
{
    string Prod_name;
    int choice;
    cout<<setw(40)<<"Current month is: "<<month<<
        "\n"<<setw(20)<<"Enter:\n"<<" 1. Insert data\n 2. Search and delete\n 3. Search and edit\n 4. Show ratings\n 5. Save the data\n 6. Show table\n 7. Choose month\n 8. Summary\n 0. Exit\n->";
    cin>>choice;
    switch (choice)
    {
    case 1:
        {
            Insertion();
        }
        break;
    case 2:
    {
        cout<<"Enter product name:\n->";
        cin>>Prod_name;
        searchAndDelete(Prod_name);
        Menu();
        break;
    }

    case 3:
    {
        cout<<"Enter product name:\n->";
        cin>>Prod_name;
        searchAndEditItem(Prod_name);
        Menu();
        break;
    }
    case 4:
    {
        Ranking();
        Menu();
        break;
    }
    case 5:
    {
        save_data();
        Menu();
        break;
    }
    case 6:
    {
        Display();
        Menu();
        break;

    }
    case 7:
    {
        cout<<" Choose the month(From 1-12):\n ->";
        cin>>month;
        Menu();
        break;
    }
    case 8:
    {
        cout<<"The total revenue of each catagory:\n ";
        calc_Revenue();
        Menu();
        break;
    }
    case 0:
    {
        exit;
        break;
    }
    
    default:
        break;
    }
}