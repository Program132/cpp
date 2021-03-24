#include <iostream>
#include <string>

int main()
{
    std::string text = " 'My name is... ";

    char c = '(';

    size_t result = text.find(c);

    if (result != std::string::npos)
    {
        std::cout << "Found..." << std::endl;
    }

    return 0;
}