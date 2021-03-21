#include <iostream>
#include <array>

int main()
{
    std::array<int, 5> const numbers { 1, 2, 3, 4, 5 };

    std::cout << numbers[0] << std::endl;

    std::array<std::string, 5> const name {"Program", "Program132", "Program Entertainment"};

    std::cout << name[1] << std::endl;
    std::cout << name[2] << std::endl;

    return 0;
}