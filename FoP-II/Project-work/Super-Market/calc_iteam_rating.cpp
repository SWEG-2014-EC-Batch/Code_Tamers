#include "header.h"

// Function to calculate the individual item rating for the store
unordered_map<string, double> calculateItemRating() {
    unordered_map<string, double> itemRatings;

    // Iterate over each category in the store
    for (const auto& categoryPair : vecStore[month]) {
        const auto& category = categoryPair.first;
        const auto& items = categoryPair.second;

        // Iterate over each item in the category
        for (const auto& itemPair : items) {
            const auto& itemName = itemPair.first;
            const auto& itemInfo = itemPair.second;

            // Calculate the rating for the item
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

            // Store the rating for the item
            itemRatings[itemName] = itemRating;
        }
    }

    return itemRatings;
}
