#include <iostream>
#include <fstream>
using namespace std;

// A function that takes the name of a file that contains integer records, an array of int and the address of a variable count
void read_file(char* filename, int* array, int* count) {
  // Open the file for reading
  ifstream fin(filename);
  // Check if the file is opened successfully
  if (fin) {
    // Initialize the count to zero
    *count = 0;
    // Read the integers from the file and store them in the array
    while (fin >> array[*count]) {
      // Increment the count
      (*count)++;
    }
    // Close the file
    fin.close();
  }
  else {
    // Print an error message
    cerr << "Error: Cannot open file " << filename << endl;
  }
}
