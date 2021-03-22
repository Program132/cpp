#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <iterator>

int main()
{
    std::string text = "My messages it's very good !";

    std::istringstream iss(text);
    std::vector<std::string> results((std::istream_iterator<std::string>(iss)), std::istream_iterator<std::string>());


    if (results[1] == "messages")
    {
        std::cout << "Noted !" << std::endl;
    }
    else
    {
        std::cout << "Not found..." << std::endl;
    }

    return 0;
}