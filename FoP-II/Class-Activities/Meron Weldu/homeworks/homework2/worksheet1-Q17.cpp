#include<iostream>
#include<cmath>
#include<cassert>
using namespace std;
double windchill(double v, double t, double& w){
    assert(t<=10);
    w = 13.12 + 0.6215*t - 11.37*pow(v,0.16) + 0.3965*t*pow(v, 0.016);
    return w;
}
int main()
{
    double v, t, w; // v = wind speed and t = temperature and w = Windchill index
    cout<<"Enter the wind speed: ";
    cin>>v;
    cout<<"Enter the Temperature in Celsius up to the range 10: ";
    cin>>t;
    cout<<"The Windchill index is "<<windchill(v,t,w);

    return 0;
}
