#include <iostream>

using namespace std;

int num;

void upper_part()
{
    for (int i = num; i >= 0; i--)
    {
        for (int k = num - i; k > 0; k--)
            cout << " ";

        for (int j = i; j >= 0; j--)
            cout << j;






void lower_part()
{
    for (int n = 1; n <= num; n++)
    {
        for (int f = num - n; f > 0; f--)
            cout << " ";
        for (int z = n; z >= 1; z--)
            cout << z;
        
        for (int x = 0; x <= n; x++)
            cout << x;
        cout << endl;
    }
}         


