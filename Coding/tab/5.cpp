#include <iostream>
#include <vector>

int main()
{
    std::vector<int> myINT {10, 90, 100, 200};

    myINT.push_back(5);

    std::cout << myINT[4] << std::endl;

    myINT.push_back(50);

    std::cout << myINT[5] << std::endl;

    return 0;
}