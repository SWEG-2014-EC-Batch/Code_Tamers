#include "header.h"

ItemInfo itemTemp;

void Insertion() {
    string itemName;
    double pricePurchased, priceSold;
    int numPurchased;

    cout << "Enter the name of the item you want to insert: ";
    cin >> itemName;

    cout << "Enter the price at which the item was purchased: ";
    cin >> pricePurchased;

    cout << "Enter the price at which the item will be sold: ";
    cin >> priceSold;

    cout << "Enter the number of items purchased: ";
    cin >> numPurchased;

    for (auto& categoryPair : vecStore[month]) {
        auto& items = categoryPair.second;

        if (items.count(itemName) > 0) {
            auto& itemInfo = items[itemName];
            int numUnsold = itemInfo.numPurchased - itemInfo.numSold;
            cout << numUnsold << " of " << itemName << " were not sold from last month." << endl;

            itemInfo.pricePurchased = pricePurchased;
            itemInfo.priceSold = priceSold;
            itemInfo.numPurchased += numPurchased;
        } else {
            ItemInfo newItemInfo = {pricePurchased, priceSold, numPurchased, 0};
            items[itemName] = newItemInfo;
        }
    }
}