#include "split.hpp"
#include <vector>
#include <sstream>
#include <string>
#include <iterator>

std::string N::Split::split(std::string const& text, int const& c)
{
    std::istringstream iss(text);
    std::vector<std::string> results((std::istream_iterator<std::string>(iss)), std::istream_iterator<std::string>());

    std::string r = results[c];

    return r;
}