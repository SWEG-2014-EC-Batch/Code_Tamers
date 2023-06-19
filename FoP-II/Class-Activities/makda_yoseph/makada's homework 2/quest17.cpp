#include <iostream>
#include <cmath>
using namespace std;
void temp(double );
void windspeed(double );
double windchillindex(double,double,double);
int main(){
    double temp,speed,index;
    cout<<windchillindex(index,speed,temp);

}
void temp(double t){
    cout<<"Enter the temprature in degree celicus"<<endl;
    cin>>t;
    
}
void windspeed(double v){
    cout<<"Enter the wind speed in meter per second "<<endl;
    cin>>v;
}
double windchillindex(double w,double v, double t){
    double V;
    temp(t);
    if (t <= 10){
        windspeed(v);
        if (v>= 2.24){
            V =pow(v,0.16);
            w = 13.12+0.6215*t-11.37*V+0.3965*t*V;
            return w;
        }
    }
    
}
