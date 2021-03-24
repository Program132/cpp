#include <iostream>

enum class Days
{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
};

void message(Days j)
{
    if (j == Days::Friday)
    {
        std::cout << "It's soon the weekend !" << std::endl;
    }
    else
    {
        std::cout << "The week has started ?!" << std::endl;
    }
}

int main()
{
    Days const aDay { Days::Friday };
    message(aDay);

    Days const ndDay { Days::Monday };
    message(ndDay);
    return 0;
}