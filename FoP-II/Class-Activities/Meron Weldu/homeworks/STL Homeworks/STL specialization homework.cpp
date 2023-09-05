#include <iostream>
using namespace std;
template <class T>
class Calculator {
private: T num1, num2;
public:
Calculator(T n1, T n2){
num1 = n1; num2 = n2;
}
void displayResult() {
cout << "Numbers are: ";
cout << num1 << " and " << num2 << ".";
cout << "\nAddition is: " << add();
cout << "\nSubtraction is: " << subtract();
cout << "\nProduct is: " << multiply();
cout << "\nDivision is: " << divide();
}
T add() {
return num1 + num2; }
T subtract() {
return num1 - num2; }
T multiply() {
return num1 * num2; }
T divide() {
return num1 / num2; }
};


template <>
class Calculator<string> {
private: string num1, num2;
public:
Calculator(string n1, string n2){
num1 = n1; num2 = n2;
}
void displayResult() {
cout << "Strings are: ";
cout << num1 << " and " << num2 << ".";
cout << "\nConcatenation is: " << add(); 
cout << "\nLength difference is: " << subtract(); 
cout << "\nNo product for strings."; 
cout << "\nNo division for strings."; 
}
string add() { 
return num1 + num2; }
int subtract() { 
return abs(static_cast<int>(num1.length() - num2.length())); }
};

int main() {
Calculator<int> intCalc(2, 1); 
Calculator<float> floatCalc(2.4, 1.2); 
Calculator<string> stringCalc("Hello", "World"); 
cout << "\nInt results: ";
intCalc.displayResult();
cout << "\nFloat results: ";
floatCalc.displayResult();
cout << "\nString results: "; 
stringCalc.displayResult();
return 0;
}
