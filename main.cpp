/*
#include <iostream>
#include <string>

class Animal {
public:
    std::string species;
    int age;

    Animal(std::string species, int age) {
        this->species = species;
        this->age = age;
    }

    virtual void makeSound() {
        std::cout << "동물이 소리를 냅니다." << std::endl;
    }
};

class Dog : public Animal {
public:
    std::string name;

    Dog(std::string name, int age) : Animal("개", age) {
        this->name = name;
    }

    void makeSound() override {
        std::cout << "멍! 멍!" << std::endl;
    }
};

int main() {
    Dog myDog("바둑이", 3);

    Animal* myPet = &myDog;
    myPet->makeSound();

    return 0;
}
 */