#include "header.h"

void calc_Revenue_cat()
{
    double revenue;
    unordered_map<string, double> cat_Ratings=calculateCategoryRating();
    cout<<setw(20)<<"Catagory:"<<setw(20)<<"Revenue:"<<setw(20)<<"Rating:"<<endl;
    for(const auto& catagory : vecStore[month])
    {
        for(auto& items: catagory.second)
        {
            revenue =+ (items.second.priceSold * items.second.numSold) - (items.second.pricePurchased * items.second.numPurchased);
        }
            cout<<setw(20)<<catagory.first<<setw(20)<<revenue<<setw(20)<<cat_Ratings[catagory.first]<<endl;
    }
}