#include <iostream>

int main()
{
    int money = 0;

    for (int i = 0; i < 20; i += 5)
    {
        money = i;
        std::cout << money << std::endl;
    }

    std::cout << "--------------" << std::endl;

    money = 0;

    for (int i = 0; i <= 50; i += 10)
    {
        money = i;
        std::cout << money << std::endl;
    }


    std::cout << "--------------" << std::endl;

    money = 1000;

    for (int i = 10; i >= 0; i -= 2)
    {
        money = i;
        std::cout << money << std::endl;
    }


    std::cout << "--------------" << std::endl;

    money = 1000;

    for (int i = 6; i > 0; i -= 2)
    {
        money = i;
        std::cout << money << std::endl;
    }

    return 0;
}