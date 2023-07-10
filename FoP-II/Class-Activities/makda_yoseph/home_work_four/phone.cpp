#include <iostream>

struct PhoneNumber {
    int area_code;
    int exchange;
    int number;
};

int main() {
    PhoneNumber k = {212, 767, 8900};
    PhoneNumber j;

    std::cout << "Enter your area code: ";
    std::cin >> j.area_code;
    std::cout << "Enter the exchange number: ";
    std::cin >> j.exchange;
    std::cout << "Enter the number: ";
    std::cin >> j.number;

    std::cout << "\nPhone number for the first struct variable: "
              << "(" << k.area_code << ") " << k.exchange << "-" << k.number << std::endl;

    std::cout << "Phone number for the second struct variable: "
              << "(" << j.area_code << ") " << j.exchange << "-" << j.number << std::endl;

    return 0;
}
