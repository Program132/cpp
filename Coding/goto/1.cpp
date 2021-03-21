#include <iostream>

int main()
{
    int a = 10;

    if (a == 5)
    {
        std::cout << "a = 5" << std::endl;
    }
    else
    {
        goto theElse;
    }

theElse:
    std::cout << "a is not = 5" << std::endl;

    return 0;
}