#include <cmath>
#include <iostream>

template <typename T>
class ComplexNumber {
public:
    ComplexNumber(T real, T imag) : real_(real), imag_(imag) {}

    T getReal() const { return real_; }
    T getImag() const { return imag_; }
    T getModule() const { return std::sqrt(real_ * real_ + imag_ * imag_); }

    template <typename U>
    bool operator<(const U& other) const {
        return getModule() < other;
    }

    template <typename U>
    bool operator>(const U& other) const {
        return getModule() > other;
    }

    template <typename U>
    bool operator==(const U& other) const {
        return getModule() == other;
    }

private:
    T real_;
    T imag_;
};

int main() {
    ComplexNumber<float> a(3, 4);
    ComplexNumber<int> b(1, 1);
    float c = 5.0;
    if (a > c) {
        std::cout << "a is greater than c" << std::endl;
    }
    else {
        std::cout << "a is not greater than c" << std::endl;
    }
    if (b < c) {
        std::cout << "b is less than c" << std::endl;
    }
    else {
        std::cout << "b is not less than c" << std::endl;
    }
    return 0;
}
