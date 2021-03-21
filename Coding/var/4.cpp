#include <iostream>

int main()
{
    const int a {5};

    std::cout << a << std::endl;

    const int b = 25;

    std::cout << b << std::endl;

    //b = 10; // Error

    std::cout << b << std::endl;
    return 0;
}