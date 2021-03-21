#include <iostream>

class MyFiCl
{
    public:
        void showName()
        {
            std::cout << "My name is Program132" << std::endl;
        }
        int age()
        {
            return 15;
        }
};

int main()
{
    MyFiCl mfc;

    mfc.showName();

    auto age = mfc.age();

    std::cout << age << std::endl;

    return 0;
}