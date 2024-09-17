#include "filehandling.hpp"
#include <fstream>
#include <iostream>
#include <string>

void filehandling::write_to_file() {
    std::fstream myFile;

    // Writing to file
    myFile.open("tutorial.txt", std::ios::out);
    if (myFile.is_open()) {
        myFile << "Hello \n";
        myFile << "This is a second line \n";
        myFile.close();
    }

    // Appending to file
    myFile.open("tutorial.txt", std::ios::app);
    if (myFile.is_open()) {
        myFile << "This is a test to see if the included files will work \n";
        myFile.close();
    }

    // Reading from file
    myFile.open("tutorial.txt", std::ios::in);
    if (myFile.is_open()) {
        std::string line;
        while (getline(myFile, line)) {
            std::cout << line << std::endl;
        }
        myFile.close();
    }
}
