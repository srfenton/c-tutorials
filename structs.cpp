#include "structs.hpp"
#include <iostream>

void printSmartphoneInfo(const Smartphone& smartphone) {
    std::cout << "name: " << smartphone.name << std::endl;
    std::cout << "storageSpace: " << smartphone.storageSpace << " GB" << std::endl;
    std::cout << "color: " << smartphone.color << std::endl;
    std::cout << "price: $" << smartphone.price << std::endl;
}

void printPersonInfo(const Person& person) {
    std::cout << "name: " << person.name << std::endl;
    std::cout << "age: " << person.age << std::endl;
    printSmartphoneInfo(person.smartphone);
    std::cout << std::endl;
}

