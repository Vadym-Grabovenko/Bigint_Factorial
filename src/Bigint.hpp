#pragma once
#include <iostream>
#include <vector>

namespace bigint {

class Bigint {

public:
    explicit Bigint(int num = 0);

    void multiply(int x);

    void print(std::ostream& out) const;

    static Bigint factorial(int n);

private:
    std::vector<int> digits;

};
std::ostream& operator<<(std::ostream& out, const Bigint& num);
} // bigint

