#include "header.h"

vector<pair<string, double>> rankCategories(const unordered_map<string, double>& categoryRatings) {
    // Convert category ratings to a vector of pairs
    vector<pair<string, double>> rankedCategories(categoryRatings.begin(), categoryRatings.end());

    // Sort the ranked categories based on the ratings in descending order
    /*the third parameter is lambda expression that takes 2 pairs of strings and doubles
    as a parameter named a and b and return true if second value of a is greater that
    actually make the sorting in descending order*/
    sort(rankedCategories.begin(), rankedCategories.end(), [](const pair<string, double>& a, const pair<string, double>& b) {return a.second > b.second;});

    return rankedCategories;
}
