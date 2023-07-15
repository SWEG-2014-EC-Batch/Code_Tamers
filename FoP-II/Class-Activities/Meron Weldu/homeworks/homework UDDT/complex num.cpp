#include <iostream>
using namespace std;

struct complex {
    double real;
    double imag;
};

complex add(complex a, complex b) {
    complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

complex subtract(complex a, complex b) {
    complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

complex multiply(complex a, complex b) {
    complex result;
    result.real = a.real * b.real - a.imag * b.imag;
    result.imag = a.real * b.imag + a.imag * b.real;
    return result;
}

complex divide(complex a, complex b) {
    complex result;
    double denominator = b.real * b.real + b.imag * b.imag;
    result.real = (a.real * b.real + a.imag * b.imag) / denominator;
    result.imag = (a.imag * b.real - a.real * b.imag) / denominator;
    return result;
}

int main() {

    complex a, b;

    cout << "Enter the real part of the first complex number: ";
    cin >> a.real;
    cout << "Enter the imaginary part of the first complex number: ";
    cin >> a.imag;

    cout << "Enter the real part of the second complex number: ";
    cin >> b.real;
    cout << "Enter the imaginary part of the second complex number: ";
    cin >> b.imag;


    complex c = add(a, b);
    cout << "Addition: " << c.real << " + " << c.imag << "i" << endl;

    c = subtract(a, b);
    cout << "Subtraction: " << c.real << " + " << c.imag << "i" << endl;

    c = multiply(a, b);
    cout << "Multiplication: " << c.real << " + " << c.imag << "i" << endl;

    c = divide(a, b);
    cout << "Division: " << c.real << " + " << c.imag << "i" << endl;

    return 0;
}
