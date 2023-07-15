#include <iostream>

using namespace std;

int num;







void lower_part()
{
    for (int n = 1; n <= num; n++)
    {
        for (int f = num - n; f > 0; f--)
            cout << " ";
        for (int z = n; z >= 1; z--)
            cout << z;


