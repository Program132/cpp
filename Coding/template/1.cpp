#include <iostream>
#include <string>
#include <vector>
#include <array>


template <typename Tab>
void showTab(Tab const & iterable)
{
    for (auto const & e : iterable)
    {
        std::cout << e << std::endl;
    }
}

int main()
{
    std::vector<std::string> my1T {"Program132", "Program"};

    showTab(my1T);

    std::array<std::string, 5> const name {"Program", "Program132", "Program Entertainment"};

    showTab(my1T);

    return 0;
}