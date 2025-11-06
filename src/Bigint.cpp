#include "Bigint.hpp"

namespace bigint {
    Bigint::Bigint(int num) {
        while (num > 0) {
            digits.push_back(num % 10);
            num /= 10;
        }
        if (digits.empty()) digits.push_back(0);
    }
    void Bigint::multiply(int x) {
        int carry = 0;
        for (size_t i = 0; i < digits.size(); i++) {
            long long product = static_cast<long long>(digits[i] * x + carry);
            digits[i] = static_cast<int> (product % 10);
            carry = static_cast<int>(product / 10);
        }

        while (carry) {
            digits.push_back(carry % 10);
            carry /= 10;
        }
    }

    void Bigint::print(std::ostream& out) const {
        for (auto it = digits.rbegin(); it != digits.rend(); ++it)
            out << *it;
    }

    std::ostream& operator<<(std::ostream& out, const Bigint& num) {
        num.print(out);
        return out;
    }

    Bigint Bigint::factorial(int n) {
        Bigint result(1);
        for (int i = 2; i <= n; ++i)
            result.multiply(i);
        return result;
    }

} // bigint