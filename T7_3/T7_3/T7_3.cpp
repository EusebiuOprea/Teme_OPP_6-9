#include <iostream>
#include <string>
#include <unordered_map>

class Driver {
public:
    Driver(std::string name) : name_(name) {}
    std::string getName() const { return name_; }

private:
    std::string name_;
};

class Car {
public:
    Car(std::string make, std::string model) : make_(make), model_(model) {}
    std::string getMake() const { return make_; }
    std::string getModel() const { return model_; }

private:
    std::string make_;
    std::string model_;
};

int main() {
    // Create a data structure to manage multiple drivers and cars
    std::unordered_map<Driver, Car> drivers_and_cars;

    // Add elements to the data structure
    Driver alice("Alice");
    Car aliceCar("Toyota", "Corolla");
    drivers_and_cars[alice] = aliceCar;

    Driver bob("Bob");
    Car bobCar("Honda", "Civic");
    drivers_and_cars[bob] = bobCar;

    Driver charlie("Charlie");
    Car charlieCar("Ford", "Focus");
    drivers_and_cars[charlie] = charlieCar;

    // Remove an element from the data structure
    drivers_and_cars.erase(bob);

    // Show all the elements in the data structure and the number
    std::cout << "Number of drivers and cars: " << drivers_and_cars.size() << std::endl;
    for (const auto& driver_and_car : drivers_and_cars) {
        const Driver& driver = driver_and_car.first;
        const Car& car = driver_and_car.second;
        std::cout << "Driver: " << driver.getName() << ", Car: " << car.getMake() << " " << car.getModel() << std::endl;
    }

    return 0;
}
