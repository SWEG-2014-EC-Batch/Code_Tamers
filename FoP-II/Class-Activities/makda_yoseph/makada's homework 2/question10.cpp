#include <iostream>
#include <string>
using namespace std;
void accept(double );
void fromfoot(double ,double ,double );
void frominch(double , double ,double );
void frommeter(double , double ,double );
void fromcentimeter(double , double , double );
void option();
int main(){
    double a, m, c, f, i;
    string want;
    do{
        accept( a);
        option();
        cout<<"do you want to continue "<<endl;
        cin>>want;

    }while(want == "yes");

}
void accept(double a){
    cout<<"enter you measurnment"<<endl;
    cin>>a;

}
void fromfoot(double a,double m,double c){
    m = 0.3048*a;
    c = 30.48*a;
    cout<<"it is "<<m<<" meters.\n"<<"it is "<<c<<" centimeters."<<endl;
}
void frominch(double a, double m,double c){
    m = 0.0254*a;
    c = 2.54*a;
     cout<<"it is "<<m<<" meters.\n"<<"it is "<<c<<" centimeters."<<endl;
}
void frommeter(double a, double i,double f){
    i = 39.37 *a;
    f = 3.28 * a;
    cout<<"it is "<<i<<" inches.\n"<<"it is "<<f<<" foot."<<endl;
}
void fromcentimeter(double a, double i, double f){
    i = 0.3937;
    f= 0.0328;
    cout<<"it is "<<i<<" inches.\n"<<"it is "<<f<<" foot."<<endl;
}
void option(){
    double a,m,c,i,f;
    string opt;
    cout<<"please the full name of unit you are using and use only lower case letters "<<endl;
    cin>>opt;
    if (opt == "foot"){
        fromfoot(a,m,c);
    }
    else if (opt == "inch"){
        frominch(a,m,c);
    }
    else if (opt == "meter"){
        frommeter( a,i,f);
    }
    else if (opt == "centimeter"){
        fromcentimeter( a, i, f);
    }
    else{
        cout<<"you entered wrong input please follow the instruction.";
    }
}

