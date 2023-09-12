#include <iostream>
#include <vector>
using namespace std;

int main() 
{
//initializing the vector at the time of declaration
vector<float> f {1.2, 5.5, 3.4};

//adding element at the end of the vecotr
    f.push_back(10.2);

//displaying the vector using for each loop
    for(float a:f)
        cout<<a<<" ";
    cout<<endl;

//removing the last element from the vector
    f.pop_back();
//checking weather the vector is affected or not
    for(float a:f)
        cout<<a<<" ";
    cout<<endl;

//adding elements to the vector using insert iterator at the beginning
    f.insert(f.begin(), 0.2);
//checking the changes using another way of iteration that is using vector iterator that points to the elements of the vectors
    vector<float> ::iterator it;
    for(it=f.begin();it!=f.end();++it)
        cout<<*it<<" ";

/*
another possible way to iterate through container
for(auto a=f.begin();a!=f.end();++a)
  cout<<*a<<" ";
*/

//we can erase specific element from vector using the erase iterator by specifying the pointer position
  f.erase(f.begin());

//we can also clear all the elements using the clear function(iterator)
  f.clear();

  return 0;
}
