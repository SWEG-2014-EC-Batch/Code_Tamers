#include "header.h"

void load_data()
{
    time_t currentTime = time(nullptr);

    // Convert to a tm structure
    tm *localTime = localtime(&currentTime);

    // Extract the month value
    month = localTime->tm_mon + 1;

    for (size_t i = 1; i < 13; i++)
    {
        unordered_map<string, unordered_map<string, ItemInfo>> store;
        ifstream fin(to_string(i) + ".txt");
        if (fin.is_open())
        {
            string catagoty, item;
            ItemInfo temp;

            while (fin >> catagoty >> item >> temp.numPurchased >> temp.numSold >> temp.pricePurchased >> temp.priceSold)
            {
                store[catagoty][item] = temp;
            }
            vecStore.push_back(store);
            fin.close();
        }
        else
        {
            ofstream fout(to_string(i) + ".txt");
            fout.close();
        }
    }
}
