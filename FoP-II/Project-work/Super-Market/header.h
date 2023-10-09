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

void calc_Revenue_iteam();
void calc_Revenue_cat();
void Insertion();
void Purchase();
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
