#include <iostream>
#include <typeinfo>

int main()
{
    int c{ 5 };
    std::cout << typeid(c).name() << std::endl;
}