#include <iostream>

struct informations
{
    std::string Name = ".";
    int Age = 0;
    std::string sex = ".";
};

int main()
{
    informations info;

    std::cout << info.Name << ", " << info.Age << ", " << info.sex << std::endl;

    info.Name = "Program";
    info.Age = 15;
    info.sex = "Boy";

    std::cout << info.Name << ", " << info.Age << ", " << info.sex << std::endl;

    return 0;
}