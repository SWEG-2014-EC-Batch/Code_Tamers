#include <iostream>
using namespace std;
void scale(double , double& , double&);
int main(){
    double s,o,n;
        scale(s,o,n);   
}
void scale(double scalefactor, double &old, double &recent){
    cout<<"enter your scale factor"<<endl;
    cin>>scalefactor;
    if( scalefactor != 0){
        cout<<"enter your value to be scaled "<<endl;
        cin>>old;
        cout<<"you old value is "<<old <<" ";
    
        recent = scalefactor * old;
        cout<<"..... And your scaled value is: "<<recent;
    }
     else{
        cout<<"....you have entered the wrong scale factor so can't be scaled ! ";
    
    }
    
    
    
}
