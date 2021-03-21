#include <iostream>

int main()
{
    int a = 20;

    switch (a)
    {
        case 20:
            std::cout << "Well, well, well." << std::endl;
            break;
        
        case 15:
            std::cout << "Good." << std::endl;
            break;

        case 10:
            std::cout << "Medium..." << std::endl;
            break;

        case 5:
            std::cout << "You can do !" << std::endl;
            break;

        case 0:
            std::cout << "Uh..." << std::endl;
            break;

        default:
            std::cout << "I don't know..." << std::endl;
    }

    return 0;
}