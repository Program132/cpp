#include <iostream>

std::string myName()
{
    std::cout << "Program" << std::endl;
}

int myNumbers()
{
    std::cout << 15 << std::endl;
}

double notes()
{
    std::cout << 5.25 << std::endl;
}

void nice()
{
    std::cout << "Return nothing" << std::endl;
}

int main()
{
    myName();
    myNumbers();
    notes();
    nice();

    return 0;
}