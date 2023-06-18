#include <iostream>
using namespace std;
void lastvalue(double&,double,bool);
int main(){
    double price,discount;
    bool percentage;
    string g;
    cout<<"Please enter the price"<<endl;
    cin>>price;
    if(price >0){
        cout<<"please enter the amount of discount"<<endl;
        cin>>discount;
        if(discount>=0){
            cout<<"if your discount is caluclated as percentage type percentage if not type fixed"<<endl;
            cin>>g;
            if(g == "percentage"){
                percentage = true;
                lastvalue(price,discount,percentage);
            }
            else{
                percentage = false;
                lastvalue(price,discount,percentage);
            }
        }
    }

}
void lastvalue(double &p,double d,bool isporf){
    double sp;
    
    if(isporf){
        sp = p - ((d*p)/100);
        cout<<"your price has discounted from price of "<<p<<" to "<<sp<<endl; 
    }
    else{
        sp = p -d;
        cout<<"your price has discounted from price of "<<p<<" to "<<sp<<endl; 
            }


}
