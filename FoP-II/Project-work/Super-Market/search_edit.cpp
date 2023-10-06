#include "header.h"

// Function to search for an item in the store and allow editing its information
void searchAndEditItem(string itemName) 
{
    // Iterate over each category in the store
    for (auto &category : vecStore[month]) {
        // Check if the item exists in the current category
        if (category.second.find(itemName) != category.second.end()) {
            // The item is found in the store
            cout << "The item " << itemName << " is found in the category " << category.first << ".\n";

            // Ask the user what they want to edit
            cout << "What do you want to edit? (pricePurchased, priceSold, numPurchased, numSold): ";
            string fieldToEdit;
            cin >> fieldToEdit;

            // Check the field the user wants to edit and perform the corresponding action
            if (fieldToEdit == "pricePurchased") {
                cout << "Enter the new purchase price: ";
                cin >> category.second[itemName].pricePurchased;
            } else if (fieldToEdit == "priceSold") {
                cout << "Enter the new sale price: ";
                cin >> category.second[itemName].priceSold;
            } else if (fieldToEdit == "numPurchased") {
                cout << "Enter the new number of items purchased: ";
                cin >> category.second[itemName].numPurchased;
            } else if (fieldToEdit == "numSold") {
                cout << "Enter the new number of items sold: ";
                cin >> category.second[itemName].numSold;
            } else {
                cout << "Invalid field name.\n";
            }

            return;
        }
    }

    // The item is not found in the store
    cout << "The item " << itemName << " is not found in the store.\n";
    cout << "Please enter the category of the item: ";
    string category;
    cin >> category;

    // Add the item to the store
    ItemInfo newItemInfo = {0.0, 0.0, 0, 0};  // Initialize with default values
    vecStore[month][category][itemName] = newItemInfo;

    cout << "The item " << itemName << " has been added to the category " << category << ".\n";
}

