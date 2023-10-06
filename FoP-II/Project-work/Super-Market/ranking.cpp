#include "header.h"

void Ranking()
{
        // Calculate the individual item ratings for the store
    unordered_map<string, double> categoryRatings = calculateCategoryRating();

    // Print the item ratings
    for (const auto& categoryRatingPair : categoryRatings) {
        const auto& category = categoryRatingPair.first;
        const auto& rating = categoryRatingPair.second;
        std::cout << "Category: " << category << ", Rating: " << rating << std::endl;
    }

    //rank the categories based on their ratings
    vector<pair<string, double>> rankedCategories = rankCategories(categoryRatings);
    // Print the ranked categories
    cout<<setw(20)<<"RankedCategories"<<endl;
    int i = 1;
    for (const auto& categoryRatingPair : rankedCategories) {
        const auto& category = categoryRatingPair.first;
        const auto& rating = categoryRatingPair.second;
        std::cout <<i<<":"<< category << ", Rating: " << rating << std::endl;
        i++;
    }
}
