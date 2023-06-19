#include<iostream>

using namespace std;

void scaleConvert(double scalE, double &inP1, double&inP2);

int main()
{
    double scalE,inP1,inP2;
    cout<<"Enter the first number"<<endl;
    cin>>inP1;
    cout<<"Enter the second number"<<endl;
    cin>>inP2;
    cout<<"Enter the scale value"<<endl;
    cin>>scalE;
    cout<<"The value of the first input before getting scaled  is "<<inP1<<endl;
    cout<<"The value of the second input before getting scaled up is "<<inP2<<endl;
    scaleConvert(scalE,inP1,inP2);
}

void scaleConvert(double scalE, double &inP1, double&inP2)
{
    if(scalE==0)
    {
        exit;
    }
    else
    {
        cout<<"The value of the first input scaled up by "<<scalE<<" is "<<scalE*inP1<<endl;
        cout<<"The value of the second input scaled up by "<<scalE<<" is "<<scalE*inP2<<endl;
        cout<<"The value of the first input scaled down by "<<scalE<<" is "<<inP1/scalE<<endl;
        cout<<"The value of the second input scaled down by "<<scalE<<" is "<<inP2/scalE<<endl;
    }
}
