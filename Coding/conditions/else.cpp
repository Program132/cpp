#include <iostream>

int main()
{
    int a = 10;

    if (a == 10)
    {
        std::cout << "a == 10" << std::endl;
    }
    else
    {
        std::cout << "Nothing..." << std::endl;
    }

    a = 1;

    if (a == 10)
    {
        std::cout << "a == 10" << std::endl;
    }
    else
    {
        std::cout << "Nothing..." << std::endl;
    }

    return 0;
}