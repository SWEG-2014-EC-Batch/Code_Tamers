#include "header.h"

void calc_Revenue_iteam()
{
    double revenue;
    unordered_map<string, double> cat_Ratings=calculateCategoryRating();
    cout<<setw(20)<<"Iteam:"<<setw(20)<<"Revenue:"<<setw(20)<<"Rating:"<<endl;
    for(const auto& catagory : vecStore[month])
    {
        for(auto& items: catagory.second)
        {
            revenue =+ (items.second.priceSold * items.second.numSold) - (items.second.pricePurchased * items.second.numPurchased);
            cout<<setw(20)<<items.first<<setw(20)<<revenue<<setw(20)<<cat_Ratings[catagory.first]<<endl;
        }
    }
}