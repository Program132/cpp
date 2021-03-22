#include <iostream>
#include "split.hpp"

int main()
{
    std::string text = "My split is done !";

    N::Split split;

    auto a = split.split(text, 2);

    std::cout << a << std::endl;

    return 0;
}