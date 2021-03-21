#include <iostream>
#include <typeinfo>

int main()
{
    int c{ 5 };
    std::cout << typeid(c).name() << std::endl;

    std::string name{"Program"};
    std::cout << typeid(name).name() << std::endl;

    double a = 5.25;
    std::cout << typeid(a).name() << std::endl;

    char letter {'a'};
    std::cout << typeid(letter).name() << std::endl;
}