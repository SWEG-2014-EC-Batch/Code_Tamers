#include "header.h"

void save_data()
{
    ofstream fout(to_string(month) + ".txt");
    for(auto& catagore : vecStore[month])
    {
        for (auto& item : catagore.second)
        {
            fout << catagore.first << " ";
            fout << item.first << " ";
            fout << item.second.numPurchased << " ";
            fout << item.second.numSold << " ";
            fout << item.second.pricePurchased << " ";
            fout << item.second.priceSold << endl;
        }
        
    }
    fout.close();
}
