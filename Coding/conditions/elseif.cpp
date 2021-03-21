#include <iostream>

int main()
{
    int a = 10;

    if (a == 10)
    {
        std::cout << "a == 10" << std::endl;
    }
    else if (a > 5)
    {
        std::cout << "a > 5" << std::endl;
    }
    else
    {
        std::cout << "Nothing..." << std::endl;
    }

    a = 6;

    if (a == 10)
    {
        std::cout << "a == 10" << std::endl;
    }
    else if (a > 5)
    {
        std::cout << "a > 5" << std::endl;
    }
    else
    {
        std::cout << "Nothing..." << std::endl;
    }

    a = 0;

    if (a == 10)
    {
        std::cout << "a == 10" << std::endl;
    }
    else if (a > 5)
    {
        std::cout << "a > 5" << std::endl;
    }
    else
    {
        std::cout << "Nothing..." << std::endl;
    }

    return 0;
}