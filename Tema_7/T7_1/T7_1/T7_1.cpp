#include <iostream>
#include <vector>

class Wheel {
public:
    Wheel(double radius, double width) : radius_(radius), width_(width) {}

    double Radius() const { return radius_; }
    double Width() const { return width_; }

private:
    double radius_;
    double width_;
};

class Carriage {
public:
    Carriage(const std::vector<Wheel>& wheels) : wheels_(wheels) {}

    void ReplaceWheel(int index, const Wheel& newWheel) {
        if (index >= 0 && index < wheels_.size()) {
            wheels_[index] = newWheel;
        }
        else {
            std::cout << "Invalid wheel index." << std::endl;
        }
    }

    void RemoveWheel(int index) {
        if (index >= 0 && index < wheels_.size()) {
            wheels_.erase(wheels_.begin() + index);
        }
        else {
            std::cout << "Invalid wheel index." << std::endl;
        }
    }

private:
    std::vector<Wheel> wheels_;
};

class Hummer : public Carriage {
public:
    Hummer(const std::vector<Wheel>& wheels) : Carriage(wheels) {}
};

int main() {
    // Create a Hummer with four wheels
    std::vector<Wheel> wheels = { Wheel(1.0, 2.0), Wheel(1.5, 3.0), Wheel(2.0, 4.0), Wheel(2.5, 5.0) };
    Hummer hummer(wheels);

    // Replace a wheel
    hummer.ReplaceWheel(2, Wheel(3.0, 6.0));

    // Remove a wheel
    hummer.RemoveWheel(3);

    return 0;
}
