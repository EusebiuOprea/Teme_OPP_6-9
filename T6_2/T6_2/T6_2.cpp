#include <iostream>

class Complex {
public:
    Complex(double real, double imag) : real_(real), imag_(imag) {}

    double Real() const { return real_; }
    double Imag() const { return imag_; }

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
    Complex complexNumber1(5, 2);
    Complex complexNumber2(6, 4);
    Complex complexNumber3 = complexNumber1 + complexNumber2;
    std::cout << "complexNumber1 = " << complexNumber1 << std::endl;
    std::cout << "complexNumber2 = " << complexNumber2 << std::endl;
    std::cout << "complexNumber3 = complexNumber1 + complexNumber2 = " << complexNumber3 << std::endl;
    return 0;
}