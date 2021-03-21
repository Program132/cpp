#include <iostream>

int add(int a, int b)
{
    return a + b;
}

int remove(int a, int b)
{
    return a - b;
}

int divi(int a, int b)
{
    return a / b;
}

int multi(int a, int b)
{
    return a * b;
}

int main()
{
    int a = add(5, 10);

    std::cout << a << std::endl;

    a = remove(50, 5);

    std::cout << a << std::endl;

    a = multi(2, 7);

    std::cout << a << std::endl;

    a = divi(100, 20);

    std::cout << a << std::endl;

    return 0;
}