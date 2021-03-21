#include <iostream>
#include <vector>

int main()
{
    std::vector<int> const myINT {10, 90, 100, 200};

    std::vector<double> const myD {5.25, 10.9, 25.654, 651560.645};

    std::vector<std::string> const mySTR {"Hm", "Well", "Ah"};

    for (auto elements : mySTR)
    {
        std::cout << elements << std::endl;
    }

    for (auto elements : myINT)
    {
        std::cout << elements << std::endl;
    }

    for (auto elements : myD)
    {
        std::cout << elements << std::endl;
    }

    return 0;
}