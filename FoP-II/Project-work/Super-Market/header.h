#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

struct ItemInfo {
    double pricePurchased;  // The price at which the item was purchased
    double priceSold;  // The price at which the item is sold
    int numPurchased;  // The number of items purchased
    int numSold;  // The number of items sold
};

extern int month;
extern vector<string> Category;
extern vector<unordered_map<string, unordered_map<string, ItemInfo>>> vecStore;

void calc_Revenue();
void Insertion();
void searchAndEditItem(string itemName);
void searchAndDelete(string itemName);
void Menu();
void Display();
void Ranking();
void save_data();
void load_data();

// A map to represent the store, where each category contains a map of items
typedef unordered_map<string, unordered_map<string, ItemInfo>> store;
unordered_map<string, double> calculateCategoryRating();
unordered_map<string, double> calculateItemRating();
vector<pair<string, double>> rankCategories(const unordered_map<string, double>& categoryRatings);


unordered_map<string, double> calculateCategoryRating() {
    unordered_map<string, double> categoryRatings;

    for(auto& categoryPair:vecStore[month])
    {
        const auto& category= categoryPair.first;
        const auto& items= categoryPair.second;
        
        double categoryTotalRating = 0.0;
        int itemCount = 0;

        //iterating over each item in the category
        for(auto& itemPair:items)
        {
            const auto& itemName = itemPair.first;
            const auto& itemInfo = itemPair.second;

            //calculating the rating for the item
            double individualItemRating = itemInfo.numSold*100/itemInfo.numPurchased;

            //adding it to categoryRating and increamenting the itemCount
            categoryTotalRating += individualItemRating;
            itemCount++;            
        }

        //then we need the average item rating to know the category rating
        double averageCategoryRating = categoryTotalRating/itemCount;
        
        //variable represent the category rating    
        double categoryRating;

        if (averageCategoryRating>=90 && averageCategoryRating<=100)
                categoryRating=5;
        else if(averageCategoryRating>=80 && averageCategoryRating<90)
            categoryRating=4.5;
        else if(averageCategoryRating>=70 && averageCategoryRating<80)
            categoryRating=4;
        else if(averageCategoryRating>=60 && averageCategoryRating<70)
            categoryRating=3.5;
        else if(averageCategoryRating>=50 && averageCategoryRating<60)
            categoryRating=3;
        else if(averageCategoryRating>=40 && averageCategoryRating<50)
            categoryRating=2.5;
        else if(averageCategoryRating>=30 && averageCategoryRating<40)
            categoryRating=2;
        else if(averageCategoryRating>0 && averageCategoryRating<30)
            categoryRating=1;
        else   
            cout<<"Error! There something wrong with the numbers in your data!"<<endl;

        //store the average rating of the current category
        categoryRatings[category] = categoryRating;
    }

    return categoryRatings;
}
