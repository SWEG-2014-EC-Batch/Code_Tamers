#include<iostream>
#include<cstdarg>
using namespace std;
int product(int count,...);
int main(){
    cout << "Product of 2, 3, 4: " << product(3, 2, 3, 4) << endl;
    cout << "Product of 5, 5, 5, 5: " << product(4, 5, 5, 5, 5) << endl;
    cout << "Product of 1, 2, 3, 4, 5: " << product(5, 1, 2, 3, 4, 5) << endl;

    return 0;

}

int product(int count, ...){
   int result = 1;
   va_list list;
   va_start(list, count);
   for( int i =0; i< count;i++){
    result *= va_arg(list, int);
   }
   va_end(list);
   return result;
}
