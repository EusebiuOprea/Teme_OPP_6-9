#include <iostream>
#include <vector>
using namespace std;

class Vehicle {
public:
    virtual void start() = 0;
};

class Rocket : public Vehicle {
private:
    int id;
    string name;
public:
    Rocket(int id, string name) : id(id), name(name) {}
    void start() {
        cout << "start " << name << " rocket, id= " << id << endl;
    }
};

class Car : public Vehicle {
private:
    string licenseNumber;
    string name;
public:
    Car(string licenseNumber, string name) : licenseNumber(licenseNumber), name(name) {}
    void start() {
        cout << "start " << name << " car, ln:" << licenseNumber << endl;
    }
    void stop() {
        cout << "stop " << name << " car, ln:" << licenseNumber << endl;
    }
};

int main() {
    vector<Vehicle*> vehicule;
    vehicule.push_back(new Car("aaa", "Red"));
    vehicule.push_back(new Car("bbb", "Ebi"));
    vehicule.push_back(new Rocket(23, "NASA"));
    for (auto element : vehicule) {
        element->start();
    }
}
