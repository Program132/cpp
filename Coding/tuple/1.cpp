#include <iostream>
#include <string>
#include <tuple>

using namespace std::literals;

int main()
{
    auto myInfo = std::make_tuple ( "Program"s, "Program132"s, 15);

    std::cout << std::get<0>(myInfo) << std::endl;
    std::cout << std::get<2>(myInfo) << std::endl;

    return 0;
}