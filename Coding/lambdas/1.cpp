#include <iostream>
#include <string>

int main()
{
    auto myFirstL = [](std::string name) -> void { std::cout << "Hello " << name << std::endl; };

    myFirstL("Program132");

    return 0;
}