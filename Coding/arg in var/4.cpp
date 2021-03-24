#include <fstream>
#include <iostream>
#include <string>
  
using namespace std;
  
int main()
{

    std::ifstream myFile {"read.txt"};

    std::string lignes;

    while (std::getline(myFile, lignes))
    {
        size_t found = lignes.find("PRC");

        if (found != string::npos)
            cout << "Found" << endl;
    }
  
    return 0;
}