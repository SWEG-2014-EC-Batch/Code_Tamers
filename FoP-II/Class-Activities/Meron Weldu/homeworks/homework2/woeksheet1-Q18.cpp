#include<iostream>
#include<cassert>
using namespace std;
void applyDiscount(double& price, double discount , bool isPercentage ){
   assert(discount>=0);
   if(isPercentage){
        price = price * (1 - discount/100);
   }
   else{
        price -= discount;
   }
   assert(price!=0);
}
int main(){
    double price, discount;
    bool isPercentage = true;
    char choice;
    cout<<"Enter the price of the item: "<<endl;
    cin>>price;
    cout<<"Enter the discount amount or percent: "<<endl;
    cin>>discount;
    cout<<"Is the discount fixed or percentage: "<<endl;
    cout<<"\"f\" for fixed and \"p\" for percentage: "<<endl;
    cin>>choice;
    if(choice == 'f'){
        isPercentage = false;
    }
    cout<<"The original price is "<<price<<" $"<<endl;
    applyDiscount(price, discount, isPercentage);
    cout<<endl<<"The price after discount is "<<price<<" $"<<endl;
return 0;
}

