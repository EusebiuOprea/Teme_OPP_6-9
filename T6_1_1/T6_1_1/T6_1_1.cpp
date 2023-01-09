#include <iostream>
#include <cmath>

class Complex {
public:
    Complex(double real, double imag) : real_(real), imag_(imag) {}

    double Real() const { return real_; }
    double Imag() const { return imag_; }

    double Abs() const { return std::sqrt(real_ * real_ + imag_ * imag_); }

    Complex operator+(const Complex& other) const {
        return Complex(real_ + other.real_, imag_ + other.imag_);
    }

private:
    double real_;
    double imag_;
};

std::ostream& operator<<(std::ostream& out, const Complex& c) {
    out << c.Real() << " + " << c.Imag() << "i";
    return out;
}

int main() {
    Complex c1(1, 7);
    Complex c2(3, 8);
    std::cout << "c1 = " << c1 << std::endl;
    std::cout << "c2 = " << c2 << std::endl;
    std::cout << "c1 + c2 = " << c1 + c2 << std::endl;
    std::cout << "|c1| = " << c1.Abs() << std::endl;
    return 0;
}
