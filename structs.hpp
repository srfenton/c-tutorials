
#ifndef STRUCTS_HPP
#define STRUCTS_HPP

#include <string>

struct Smartphone {
    std::string name;
    int storageSpace;
    std::string color;
    float price;
};

struct Person {
    std::string name;
    int age;
    Smartphone smartphone;
};

void printSmartphoneInfo(const Smartphone& smartphone);
void printPersonInfo(const Person& person);

#endif /* STRUCTS_HPP */
