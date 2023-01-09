#include <iostream>
#include <vector>

class Person {
public:
    Person(int age) : age_(age) {}
    int getAge() const { return age_; }

private:
    int age_;
};

class Car {
public:
    Car(int age) : age_(age) {}
    int getAge() const { return age_; }

private:
    int age_;
};

template <typename T>
double computeAverageAge(const std::vector<T>& items) {
    double sum = 0.0;
    for (const T& item : items) {
        sum += item.getAge();
    }
    return sum / items.size();
}

int main() {
    // Create two lists: one for persons and one for cars
    std::vector<Person> persons = { Person(30), Person(35), Person(40) };
    std::vector<Car> cars = { Car(5), Car(10), Car(15) };

    // Compute the average age for each list
    double averageAgePersons = computeAverageAge(persons);
    double averageAgeCars = computeAverageAge(cars);

    // Print the results
    std::cout << "Average age of persons: " << averageAgePersons << std::endl;
    std::cout << "Average age of cars: " << averageAgeCars << std::endl;

    return 0;
}
