#include <iostream>
#include <string>
using namespace std;

bool palindrome(string str, int start, int en)
{
    if (start >= en) { return true; }
    if (str[start] != str[en]) { return false; }
    return palindrome(str, start + 1, en - 1);
}

int main()
{
    string str1;
    cout << "Enter a string: ";
    getline(cin, str1);
    if (palindrome(str1, 0, str1.length() - 1))
        cout << "palindrome." << endl;
    else
        cout << "not a palindrome." << endl;
    return 0;
}
