#include "flux.hpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace N;

std::string Flux::read(std::string file)
{
    std::ifstream myFile {file};

    std::string lignes;
    
    std::string result;

    while (std::getline(myFile, lignes))
    {
        return lignes;
    }
}

void Flux::write(std::string file, std::string arg)
{
    std::ofstream myFile {file};

    std::string mySentence {arg};

    myFile << mySentence;
}