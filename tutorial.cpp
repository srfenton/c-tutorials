#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
  fstream myFile;
  myFile.open("tutorial.txt", ios::out);
  if (myFile.is_open()){
    myFile << "Hello \n";
    myFile << "This is a second line \n";
    myFile.close();
  }
    myFile.open("tutorial.txt", ios::app);
  if (myFile.is_open()){
    myFile << "Hello2 \n";
    myFile.close();
  }
  
  myFile.open("tutorial.txt", ios::in);
  if (myFile.is_open()){
    string line;
    while(getline(myFile, line)){
      cout << line << endl;
    }
  }

  //std::cout << "Hello, World!" << std::endl;
  return 0;
}
