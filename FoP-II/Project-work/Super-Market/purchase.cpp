#include "header.h"

void Purchase() {
    string itemName;
    int quantity;

    cout << "Enter the name of the item you want to purchase: ";
    cin >> itemName;

    cout << "Enter the quantity you want to purchase: ";
    cin >> quantity;

    for (auto& categoryPair : vecStore[month]) {
        auto& items = categoryPair.second;

        if (items.count(itemName) > 0) {
            auto& itemInfo = items[itemName];

            if (itemInfo.numPurchased - itemInfo.numSold >= quantity) {
                itemInfo.numSold += quantity;
                double totalCost = itemInfo.priceSold * quantity;
                cout << "You purchased " << quantity << " " << itemName << ". The total cost is " << totalCost << "." << endl;
            } else {
                cout << "Sorry, we do not have enough " << itemName << " in stock." << endl;
            }

            return;
        }
    }

    cout << "Sorry, we do not have " << itemName << " in our store." << endl;
    Menu();
}
