#include <iostream>
using namespace std;

struct point {
    double x;
    double y;
};

point readPoint() {
    point p;
    cout << "Enter the X coordinate: ";
    cin >> p.x;
    cout << "Enter the Y coordinate: ";
    cin >> p.y;
    return p;
}

void printPoint(point p) {
    cout << "(" << p.x << ", " << p.y << ")" << endl;
}

int main() {
    point p = readPoint();
    printPoint(p);
    return 0;
}

