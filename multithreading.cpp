
#include "multithreading.hpp"
#include <iostream>
#include <thread>
#include <map>
#include <string>
#include <chrono>
using namespace std::chrono;

void multithreading::ReFreshForecast(std::map<std::string, int>& forecastMap) {
    while (true) {
        for (auto& item : forecastMap) {
            item.second++;
            std::cout << item.first << " - " << item.second << std::endl;
        }
        std::this_thread::sleep_for(2000ms);
    }
}
