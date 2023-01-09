#include <cmath>
#include <iostream>

class ComplexNumber {
public:
    ComplexNumber(double real, double imag) : real_(real), imag_(imag) {}

    double getModule() const {
        return std::sqrt(real_ * real_ + imag_ * imag_);
    }

    double getReal() const { return real_; }
    double getImag() const { return imag_; }

private:
    double real_;
    double imag_;
};

int main() {
    // Create two complex numbers
    ComplexNumber c1(8, 3);
    ComplexNumber c2(2, 7);

    // Compute the minimum module of the two complex numbers
    ComplexNumber min(0, 0); // <-- Add arguments here
    if (c1.getModule() < c2.getModule()) {
        min = c1;
    }
    else {
        min = c2;
    }

    // Print the result
    std::cout << "Minimum module: " << min.getModule() << std::endl;
    std::cout << "Real part: " << min.getReal() << std::endl;
    std::cout << "Imaginary part: " << min.getImag() << std::endl;

    return 0;
}
