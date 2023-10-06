#include "header.h"

void searchAndDelete(string itemName) 
{
    int choice;
    // Iterate over each category in the store
    for (auto &category : vecStore[month]) 
    {
        // Check if the item exists in the current category
        if (category.second.find(itemName) != category.second.end()) 
        {
            cout << "The item " << itemName << " is found in the category " << category.first << ".\n Confirm deletion:\n 1. Yes\n2. No";
            cin>>choice;

            if(choice==1)
            {
                cout<<itemName<<" has been deleted"<<endl;
                vecStore[month][category.first].erase(category.second.find(itemName));
                Menu();
            }

            else
            {
                cout<<itemName<<" is not found"<<endl;
                Menu();
            }
        }
    }
}