#include <fstream>
#include <iostream>
#include <string>

int main()
{
    std::ofstream myFile {"write.txt"}; // Remove and replace

    std::string mySentence {"My new sentence in the file"};

    myFile << mySentence;

    std::cout << "First sentence done" << std::endl;

    mySentence = "\nMy second new sentence !";

    myFile << mySentence;

    return 0;
}