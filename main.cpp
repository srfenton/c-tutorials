#include <iostream>
#include <thread>
#include <map>
#include <string>
#include "multithreading.hpp"
#include "structs.hpp"
#include "filehandling.hpp"

int main() {


    //hello world
    std::cout << "Hello World!";


    // file handling
//    filehandling::write_to_file();

    // structs section
//    Smartphone smartphone;
//    smartphone.name = "iPhone 12";
//    smartphone.storageSpace = 32;
//    smartphone.color = "black";
//    smartphone.price = 999.999;
//
//    Smartphone smartphone2;
//    smartphone2.name = "Samsung Galaxy S21 Ultra";
//    smartphone2.storageSpace = 64;
//    smartphone2.color = "gray";
//    smartphone2.price = 888.888;
//
//    Person p;
//    p.name = "Saldina";
//    p.age = 26;
//    p.smartphone = smartphone;
//    printPersonInfo(p);

    // multithreading section
//    std::map<std::string, int> forecastMap = {
//        {"New York", 15},
//        {"Mumbai", 20},
//        {"Berlin", 18}
//    };

//    std::thread bgWorker(multithreading::ReFreshForecast, std::ref(forecastMap));
//    bgWorker.detach();

    // this is for MacOS
    //system("read -p var");

    // this is for Windows
    system("pause>nul");


    return 0;
}
