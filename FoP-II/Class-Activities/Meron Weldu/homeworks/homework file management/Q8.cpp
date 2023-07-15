
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("sheet5ex5.cpp");
    char ch;
    int count[26] = {0}; // To store the count of characters
    
    if (file) {
        while (file >> ch) {
            if (ch >= 'a' && ch <= 'z') {
                count[ch - 'a']++;
            }
        }
        
        cout << "Character   Occurrences" << endl;
        for (int i = 0; i < 26; i++) {
            cout << static_cast<char>(i + 'a') << "           " << count[i] << endl;
        }
        
    } else {
        cout << "Error opening file!" << endl;
    }

    return 0;
}
