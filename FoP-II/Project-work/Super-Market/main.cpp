#include "header.h"

vector<string>Category={"Baby","Bakery","Beverages","CannedFood","CleaningSupplies","Dairy","Electronics","Fish","Fresh Produce","Frozen","Grocery",
                        "Health","Household","HouseholdCleaning","Meat","Personal Care","PetFood","Produce","Snacks","Toiletries"};



void calc_Revenue()
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


unordered_map<string, double> calculateItemRating() {
    unordered_map<string, double> itemRatings;

  
    for (const auto& categoryPair : vecStore[month]) {
        const auto& category = categoryPair.first;
        const auto& items = categoryPair.second;

        
        for (const auto& itemPair : items) {
            const auto& itemName = itemPair.first;
            const auto& itemInfo = itemPair.second;

            
            double percentage = itemInfo.numSold*100/itemInfo.numPurchased;
            double itemRating;
            if (percentage>=90 && percentage<=100)
                itemRating=5;
            else if(percentage>=80 && percentage<90)
                itemRating=4.5;
            else if(percentage>=70 && percentage<80)
                itemRating=4;
            else if(percentage>=60 && percentage<70)
                itemRating=3.5;
            else if(percentage>=50 && percentage<60)
                itemRating=3;
            else if(percentage>=40 && percentage<50)
                itemRating=2.5;
            else if(percentage>=30 && percentage<40)
                itemRating=2;
            else if(percentage>0 && percentage<30)
                itemRating=1;
            else   
                cout<<"Error! There something wrong with the numbers in your data!"<<endl;

            
            itemRatings[itemName] = itemRating;
        }
    }

    return itemRatings;
}


int main()
{
    load_data();
    Menu();
}


