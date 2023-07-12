#include <iostream>
using namespace std;

struct coord {
    int x, y;
};

coord read();
void print(coord c);

int main() {
	//calling read function in coord variable
	coord c =read();
	//calling the print function with the point variable as an argument
	print(p);
	return 0;
}

coord read() {
    coord c;
	cout<<"enter the x coordinate: "; cin>>c.x;
	cout<<"enter the y coordinate: "; cin>>c.y;
	return c;
}
void print(coord c) {
	cout<<"The coordinates are ("<<c.x<<", "<<c.y<<")"<<endl;
}
