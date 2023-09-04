#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    vector<string>nameVector;
    nameVector.push_back("Raiden");
    nameVector.push_back("Nahida");
    nameVector.push_back("Jean");
    nameVector.push_back("Kazuha");
    nameVector.push_back("END");
    
    nameVector.insert(nameVector.begin()+2,"Yelan");
    nameVector.pop_back();

    for(string a:nameVector)
    {
        cout<<a<<endl;
    }
}