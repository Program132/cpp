#include <iostream>
#include <string>


template <typename Var>
void show(Var const & var)
{
    std::cout << var << std::endl;
}

int main()
{
    std::string a = "Test";
    int b = 3;

    show(a);
    show(b);

    return 0;
}