#include <iostream>

int main()
{
    int a = 5;

    if (a == 5)
    {
        goto theIf;
    }
    else
    {
        goto theElse;
    }

    goto finish;
    
theElse:
    std::cout << "a is not = 5" << std::endl;

theIf:
    std::cout << "a = 5" << std::endl;

finish:
    std::cout << "Ended" << std::endl;

    return 0;
}