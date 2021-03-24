#include <iostream>
#include <string>
#include <vector>
#include <array>
#include "math.hpp"
#include "flux.hpp"
#include "tab.hpp"

using namespace N;

int main()
{
    Math math;
    Flux flux;
    Tab tab;

    std::cout << "-------" << std::endl;

    auto a = math.add(5, 10);
    std::cout << a << std::endl;
    a = math.remove(20, 7);
    std::cout << a << std::endl;
    a = math.divi(10, 2);
    std::cout << a << std::endl;
    a = math.multi(10, 100);
    std::cout << a << std::endl;


    std::cout << "-------" << std::endl;


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

    std::array<std::string, 5> const na {"Program", "Program132", "Program Entertainment", "PE", "pe"};
    std::array<int, 2> const in {5, 10};
    std::array<double, 1> const dou {10.5};
    std::array<char, 4> const ch {'A', 'B', 'C', 'D'};

    std::cout << "-------" << std::endl;

    tab.show(n);
    tab.show(i);
    tab.show(d);
    tab.show(c);

    tab.show(na);
    tab.show(in);
    tab.show(dou);
    tab.show(ch);

    std::cout << "-------" << std::endl;

    auto t  = tab.getCase(n, 1);
    std::cout << t << std::endl;
    t  = tab.getCase(n, 0);
    std::cout << t << std::endl;

    return 0;
}