#include <iostream>
#include <cmath>

class Complex {
public:
    Complex(double real, double imag) : real_(real), imag_(imag) {}

    double Real() const { return real_; }
    double Imag() const { return imag_; }

    double Abs() const { return std::sqrt(real_ * real_ + imag_ * imag_); }

    bool operator<(const Complex& other) const {
        return Abs() < other.Abs();
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
    Complex c1(1, 9);
    Complex c2(4, 2);
    if (c1 < c2) {
        std::cout << "c1 has a smaller modulus than c2." << std::endl;
    }
    else {
        std::cout << "c2 has a smaller or equal modulus to c1." << std::endl;
    }
    return 0;
}
