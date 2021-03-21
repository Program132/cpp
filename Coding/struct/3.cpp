#include <iostream>

struct Program
{
    std::string name = "Unknow";
    int creation = 0;
    int members = 0;
};

auto config = Program();

void setName(std::string newName)
{
    config.name = newName;
}

void setCreation(int newCreation)
{
    config.creation = newCreation;
}

void setMembers(int newMembers)
{
    config.members = newMembers;
}

int main()
{
    std::cout << config.name << std::endl;
    std::cout << config.creation << std::endl;
    std::cout << config.members << std::endl;

    std::cout << "------------------ Update ------------------" << std::endl;

    setName("Program");

    std::cout << config.name << std::endl;

    setCreation(2020);

    std::cout << config.creation << std::endl;

    setMembers(15);

    std::cout << config.members << std::endl;

    return 0;
}