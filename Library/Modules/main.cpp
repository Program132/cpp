#include <iostream>
#include <string>
#include "math.hpp"
#include "flux.hpp"
#include "tab.hpp"

using namespace N;

int main()
{
    Math math;
    Flux flux;
    Tab tab;

    auto a = math.add(5, 10);
    std::cout << a << std::endl;
    a = math.remove(20, 7);
    std::cout << a << std::endl;
    a = math.divi(10, 2);
    std::cout << a << std::endl;
    a = math.multi(10, 100);
    std::cout << a << std::endl;



    std::string file {"file.txt"};
    flux.write(file, "My sentence");
    auto b = flux.read(file);
    std::cout << b << std::endl;
    flux.write(file, "My last sentence has been delted and replaced by this sentence !");
    b = flux.read(file);
    std::cout << b << std::endl;


    std::vector<std::string> n {"Program132", "Program"};
    std::vector<int> i {1000, 100, 23, 45, 78, 98};
    std::vector<double> d {15.5, 10.25, 19.5, 5.25};
    std::vector<char> c {'a', 'b' ,'d', 'e', 'f', 'g'};

    std::cout << tab.strSTab(n) << std::endl;
    std::cout << tab.strITab(i) << std::endl;
    std::cout << tab.strDTab(d) << std::endl;
    std::cout << tab.strCTab(c) << std::endl;

    return 0;
}