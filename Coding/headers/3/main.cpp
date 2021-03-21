#include <iostream>
#include <string>
#include "math.hpp"

using namespace N;

int main()
{
    Math math;

    double a = math.add(10, 50);

    std::cout << a << std::endl;

    a = math.remove(5, 25);

    std::cout << a << std::endl;

    a = math.divi(60, 20);

    std::cout << a << std::endl;

    a = math.multi(3, 4);

    std::cout << a << std::endl;

    return 0;
}