#include <iostream>
#include "Bigint.hpp"

int main() {
    int n;
    std::cout << "Enter a num to find its factorial ->";
    if  (!(std::cin >> n)) {
        std::cout << "You've entered something that is not an integer." << std::endl;
        return -1;
    }
    if (n < 0) {
        std::cout << "Your num must be a positive integer to find a factorial" << std::endl;
        return -1;
    }
    bigint::Bigint result = bigint::Bigint::factorial(n);
    std::cout << n << "! = " << result << std::endl;

    return 0;
}