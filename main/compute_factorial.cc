#include <iostream>
#include "../lib/factorial.h"
#include "../lib/gamma.h"

int main() {
    std::cout << "Enter a number: ";
    double number;
    std::cin >> number;

    if (std::cin.fail()) {
        std::cerr << "Invalid input. Please enter a valid number.\n";
        return 1;
    }

    if (number == static_cast<int>(number)) {
        std::cout << "Factorial of " << static_cast<int>(number) << " is " << factorial(static_cast<int>(number)) << std::endl;
    } else {
        std::cout << "Gamma function of " << number << " is " << gamma_function(number) << std::endl;
    }

    return 0;
}
