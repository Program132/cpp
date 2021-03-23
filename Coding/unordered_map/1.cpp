#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
    using namespace std::literals;

    std::unordered_map<std::string, std::string> dictionnaire
    {
        { "My name of the line"s, "My value of the line"s },
    };

    return 0;
}