#include <iostream>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int a = add(5, 10);

    std::cout << a << std::endl;

    return 0;
}