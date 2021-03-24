#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
#include <iterator>
  
using namespace std;
  
int main()
{

    std::ifstream myFile {"read.txt"};

    std::string lignes;

    while (std::getline(myFile, lignes))
    {
        std::istringstream iss(lignes);
        std::vector<std::string> results((std::istream_iterator<std::string>(iss)), std::istream_iterator<std::string>());

        if (results[0] == "send")
            std::cout << results[1] << std::endl;
    }
  
    return 0;
}