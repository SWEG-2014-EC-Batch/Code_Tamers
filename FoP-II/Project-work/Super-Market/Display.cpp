#include "header.h"

void Display()
{
    for(const auto& catagory : vecStore[month])
    {
        for(auto& items: catagory.second)
        {
            cout << catagory.first << " ";
            cout << items.first << " ";
            cout << items.second.numPurchased << " ";
            cout << items.second.numSold << " ";
            cout << items.second.pricePurchased << " ";
            cout << items.second.priceSold << endl;        
        }
    }
}
