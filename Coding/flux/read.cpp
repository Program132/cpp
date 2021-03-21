#include <fstream>
#include <iostream>
#include <string>

int main()
{
    std::ifstream myFile {"read.txt"};

    std::string lignes;

    while (std::getline(myFile, lignes))
    {
        std::cout << lignes << std::endl;
    }

    return 0;
}