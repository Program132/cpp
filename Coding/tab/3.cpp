#include <iostream>
#include <array>

int main()
{
    std::array<std::string, 5> const name {"Program", "Program132", "Program Entertainment"};

    for (auto const fullN : name)
    {
        std::cout << fullN << std::endl;
    }

    std::array<double, 5> const notes {10.5, 17.25, 19.5, 5.25};

    for (auto const fn : notes)
    {
        std::cout << fn << std::endl;
    }

    return 0;
}