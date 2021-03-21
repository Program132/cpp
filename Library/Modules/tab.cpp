#include "tab.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace N;

std::string Tab::strSTab(std::vector<std::string> tab)
{
    
    for (auto e : tab)
    {
        std::cout << e << std::endl;
    }
}

int Tab::strITab(std::vector<int> tab)
{
    for (auto e : tab)
    {
        std::cout << e << std::endl;
    }
}

double Tab::strDTab(std::vector<double> tab)
{
    for (auto e : tab)
    {
        std::cout << e << std::endl;
    }
}

char Tab::strCTab(std::vector<char> tab)
{
    for (auto e : tab)
    {
        std::cout << e << std::endl;
    }
}