#include <iostream>
#include <string>
using namespace std;

int digitSum(string str, int s)
{
    if (s == 1) { return str[0] - '0'; }
    else { return (str[s - 1] - '0') + digitSum(str, s - 1); }
}

int main()
{
    string str1;
    getline(cin,str1);
    cout << "Sum of the digits: " << digitSum(str1, str1.length()) << endl;
    return 0;
}
