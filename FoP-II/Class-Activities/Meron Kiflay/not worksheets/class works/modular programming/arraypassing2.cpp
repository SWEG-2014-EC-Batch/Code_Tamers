#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int s=5;
double re[5]={16,27,39,56,81};
void cur(double c[]);
void power(double p[], double c[]);
void tot(double p[],double c[],double r[],double t[3]);
void display(double p[],double c[],double r[],double t[3]);
int main()
{
   double cu[5],po[5],to[3];
   cur(cu);
   power(po,cu);
   tot(po,cu,re,to);
   display(po,cu,re,to);

}
void cur(double c[])
{
    for(int i=0;i<s;i++)
    {
        cout<<"enter your "<<i+1<<" current: ";
        cin>>c[i];
    }
}
void power(double p[],double c[])
{
   for(int i=0;i<s;i++)
    {
        p[i] = re[i]*pow(c[i],2);
    }
}
void tot(double p[],double c[],double r[],double t[3])
{
    for(int i=0;i<s;i++)
    {
      t[0]+=re[i];
      t[1]+=c[i];
      t[2]+=p[i];
    }
}
void display(double p[],double c[],double r[],double t[3])
{
    cout << setw(10) << "Resistance" << setw(10) << "Current" << setw(10) << "Power" << endl;
    for(int i=0;i<s;i++)
    {
      cout << setw(10) << re[i] << setw(10) << c[i] << setw(10) << p[i] << endl;
    }
    cout << "Total:" << setw(5) << t[0] << setw(10) << t[1] << setw(10) << t[2] << endl;
}
