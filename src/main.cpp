#include <iostream>
#include "Bigint.hpp"

int main() {
    int n = 24;

    bigint::Bigint result = bigint::Bigint::factorial(n);
    std::cout << n << "! = " << result << std::endl;

    return 0;
}