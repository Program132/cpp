#include <iostream>

struct Program
{
    std::string name = ".";
    int creation = 0;
    int members = 0;
};

int main()
{
    auto config = Program();

    config.name = "Program Entertainment";
    config.creation = 2020;
    config.members = 15;

    std::cout << config.name << ", " << config.creation << ", " << config.members << std::endl;

    return 0;
}