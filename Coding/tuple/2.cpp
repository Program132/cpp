#include <iostream>
#include <string>
#include <tuple>

using namespace std::literals;

int main()
{
    auto myInfo = std::make_tuple ( "Program"s,  1000);

    std::cout << std::get<std::string>(myInfo) << std::endl;
    std::cout << std::get<int>(myInfo) << std::endl;
    return 0;
}