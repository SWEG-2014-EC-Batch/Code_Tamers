#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

struct Item {
    string name;
    double purchasePrice;
    double sellingPrice;
    int quantity;
    int soldQuantity;
    Item* next;
};

// Function to calculate the rating of an item
double rating(Item* item) {
    if (item->quantity == 0) {
        return 0;
    } else {
        double rating = (double)item->soldQuantity / item->quantity * 5;
        if (rating > 5) {
            rating = 5;
        }
        return rating;
    }
}

// Function to sort items based on their rating using insertion sort
void ranking(unordered_map<string, Item*>& categories, string category) {
    vector<Item*> items;
    Item* start = categories[category];
    while (start != NULL) {
        items.push_back(start);
        start = start->next;
    }

    for (int i = 1; i < items.size(); ++i) {
        Item* key = items[i];
        double keyRating = rating(key);
        int j = i - 1;

        while (j >= 0 && rating(items[j]) < keyRating) {
            items[j + 1] = items[j];
            j = j - 1;
        }
        items[j + 1] = key;
    }

    // Display the ranking of items
    for (int i = 0; i < items.size(); ++i) {
        cout << setw(20) << "Rank " << i+1 << ": " << items[i]->name << " with rating " << rating(items[i]) << endl;
    }
}

// Function to insert or purchase a new item
void insertOrUpdateItem(const string &categoryName, const string &itemName, double purchasePrice, double sellingPrice, int quantity)
{
    // Check if the category exists in the hashmap
    if (categories.find(categoryName) != categories.end())
    {
        // Category exists, check if the item exists in the linked list
        Item *current = categories[categoryName];
        while (current != nullptr)
        {
            if (current->name == itemName)
            {
                // Item already exists, update its details
                current->purchasePrice = purchasePrice;
                current->sellingPrice = sellingPrice;
                current->quantity += quantity;
                cout << "Item updated: " << itemName << endl;
                return;
            }
            current = current->next;
        }
    }

    // Item doesn't exist, create a new item node
    Item *newItem = new Item;
    newItem->name = itemName;
    newItem->purchasePrice = purchasePrice;
    newItem->sellingPrice = sellingPrice;
    newItem->quantity = quantity;
    newItem->next = nullptr;

    // Add the new item to the beginning of the linked list
    if (categories.find(categoryName) == categories.end())
    {
        // Category doesn't exist, create a new category
        categories[categoryName] = newItem;
    }
    else
    {
        // Category exists, add the item to the beginning of the linked list
        newItem->next = categories[categoryName];
        categories[categoryName] = newItem;
    }

    cout << "Item inserted: " << itemName << endl;
}


//selling item part
Item* searchItem(Item* head, string itemToSell){
    Item* current = head;  // Initialize current node
    while (current != NULL) {
        if (current->name == itemToSell) {
            return current;
        }
        current = current->next;
    }
    return NULL; // Not found
}

void Sell_item(string catagory, string itemToSell){


    if (categories.find(catagory) != categories.end()) {
        Item* head = categories[catagory];
        // Do something with 'item'
        Item* item = searchItem(head, itemToSell);
        if (item != NULL) {
            // Item found
            cout << "Item: " << item->name << "\n";
            cout << "Selling Price: " << item->sellingPrice << "\n";
            cout << "Enter the quantity you want to buy: ";
            int quantityToBuy;
            cin >> quantityToBuy;
            if (quantityToBuy <= item->quantity) {
                item->quantity -= quantityToBuy;  // Decrement the quantity
                item->soldQuantity += quantityToBuy;  // Increment the sold quantity
                cout<< "Purchase successful! Remaining quantity: " << item->quantity << "\n";
            } else {
                cout << "Sorry, we only have " << item->quantity << " items in stock.\n";
            }
        } else {
            // Item not found
            cout << "Item not found.\n";
        }
    }
      

    else {
        // Key not found in the 
        cout<<"NO Such Catagory!";
    }
 }


//function for displaying items
unordered_map<string, Item*> storE;


void displaY();
void displaY(string caT);
void displaY(unordered_map<string, Item*> storE);
bool searcH(string caT);


void displaY()
{
    cout<<"This are the avaliable categories:"<<endl;
    for(const auto& pair : storE)
    {
        cout<<setw(20)<<pair.first<<endl;
    }
}

bool searcH(string caT)
{
    for(const auto& pair : storE)
    {
        if(caT==pair.first)
        {
            return true;
        }
    }
    return false;
}

void displaY(string caT)
{
    if(searcH(caT)==true)
    {
        cout<<"The items in category "<<caT<<" are:"<<endl;
        for(const auto& pair : storE)
        {
            if(caT==pair.first)
            {
                while(pair.second->next != NULL)
                {
                    cout<<pair.second->name;
                }
            }
        }
    }
    else
    {
        cout<<"The category "<<caT<<" is not found"<<endl;
    }
}

void displaY(unordered_map<string, Item*> storE)
{
    for(const auto& pair : storE)
    {
        cout<<"Category: "<<pair.first<<" have items:"<<endl;
        while(pair.second->next != NULL)
        {
            cout<<pair.second->name;
        }
    }
}