#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
    using namespace std::literals;

    std::unordered_map<std::string, std::string> dictionnaire
    {
        {"My name of the line"s, "My value of the line"s}
    };

    for (auto const & paire : dictionnaire)
    {
        std::cout << "Name : " << paire.first << std::endl;
        std::cout << "Value : " << paire.second << std::endl << std::endl;
    }

    dictionnaire["My name of the line"] = "My value has changed !";

    for (auto const & paire : dictionnaire)
    {
        std::cout << "Name : " << paire.first << std::endl;
        std::cout << "Value : " << paire.second << std::endl << std::endl;
    }

    return 0;
}