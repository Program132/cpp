#include <iostream>

int main()
{
    int a = 0;

    while (a < 5)
    {
        std::cout << a << std::endl;
        a += 1;
    }

    std::cout << "------------------" << std::endl;

    a = 10;

    while (a > 5)
    {
        std::cout << a << std::endl;
        a -= 1;
    }

    std::cout << "------------------" << std::endl;

    a = 0;

    while (a <= 4)
    {
        std::cout << a << std::endl;
        a += 1;
    }

    std::cout << "------------------" << std::endl;

    a = 6;

    while (a >= 2)
    {
        std::cout << a << std::endl;
        a -= 1;
    }

    return 0;
}