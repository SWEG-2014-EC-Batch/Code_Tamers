#include "header.h"

void Menu() 
{
    string Prod_name;
    int choice;
    cout<<setw(40)<<"Current month is: "<<month<<
        "\n"<<setw(20)<<"Enter:\n"<<" 1. Purchase\n 2. Insert a product\n 3. Search and delete\n 4. Show ratings\n 5. Save the data\n 6. Show table\n 7. Choose month\n 8. Summary\n 0. Exit\n->";
    cin>>choice;
    switch (choice)
    {
    case 1:
    {
        Purchase();
    }
        break;
    case 2:
    {
        Insertion();
        break;
    }

    case 3:
    {
        cout<<"Enter product name:\n->";
        cin>>Prod_name;
        searchAndDelete(Prod_name);
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
        int c;
        cout<<"Choose:\n1. Category revenue\n2. Iteam revenue\n->";
        cin>>c;
        switch (c)
        {
            case 1:
            {
                calc_Revenue_cat();
            }
            case 2:
            {
                calc_Revenue_iteam();
            }
        default:
            break;
        }

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