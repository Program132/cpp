#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <iterator>

int main()
{
    std::string text = "My message it's very good !";

    std::istringstream iss(text);
    std::vector<std::string> results((std::istream_iterator<std::string>(iss)), std::istream_iterator<std::string>());

    std::cout << results[1] << std::endl;
    return 0;
}