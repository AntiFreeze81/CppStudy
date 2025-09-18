#include <iostream>
#include <string>

using namespace std;

class Engine {
private:
    string fuelType;
public:
    Engine(string f) : fuelType(f){}

    void start() {
        cout << "Engine started with " << fuelType << " fuel." << endl;
    }
};

class Car {
private:
    string model;
    Engine engine;
public:
    Car(string m, string f) : model(m), engine(f){}

    void drive() {
        cout << "Driving " << model << "..." << endl;
        engine.start();
    }
};

int main() {
    Car my_awesome_car("My Awesome Car", "Gasoline");
    cout << "--- Car Simulation ---" << endl;
    my_awesome_car.drive();
    cout << "--- End of Simulation ---" << endl;
}