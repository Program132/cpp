#include <iostream>
#include <string>

int main()
{
    std::string text = " 'My name is... ";

    char c = '(';
    char b = '.';

    size_t result = text.find(c);
    size_t res = text.find(b);

    if (result != std::string::npos)
    {
        std::cout << "Found..." << std::endl;
    }
    else if (res != std::string::npos)
    {
        std::cout << "Uh why '.' ?" << std::endl;
    }

    return 0;
}