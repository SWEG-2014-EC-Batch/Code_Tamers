
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile("data.txt"); // Replace "data.txt" with your file name
    
    if (!inputFile) {
        cerr << "Error opening the file." << endl;
        return 1;
    }
    
    int num;
    int count;
    double sum;
    double average;
    
    while (inputFile >> count) {
        sum = 0.0;
        
        for (int i = 0; i < count; ++i) {
            inputFile >> num;
            sum += num;
        }
        
        average = sum / count;
        cout << "Average of group of " << count << " numbers: " << average << endl;
    }
    
    inputFile.close();
    
    return 0;
}
