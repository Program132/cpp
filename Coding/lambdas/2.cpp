#include <iostream>
#include <string>

int main()
{
    auto myN { [](std::string name) -> void { std::cout << "Hello " << name << std::endl; } };

    myN("Program");

    auto myA { [](int number) -> void { std::cout << "You have the number " << number << std::endl; } };

    myA(15);

    return 0;
}