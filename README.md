# cpp

## Informations

Hello, welcome to this repository.

In the latter you will can found my code, my library (1 or +), and more about the C++.

Enjoy !


## Code example

_1st_

```cpp
    #include <iostream>

    int main()
    {
        int a = 10;

        if (a == 5)
        {
            std::cout << "a = 5" << std::endl;
        }
        else
        {
            goto theElse;
        }

    theElse:
        std::cout << "a is not = 5" << std::endl;

        return 0;
    }
```

_2nd_

```cpp
    #include <iostream>
    #include <string>

    int main()
    {
        auto myN { [](std::string name) -> void { std::cout << "Hello " << name << std::endl; } };

        myN("Program");

        auto myA { [](int number) -> void { std::cout << "You have the number " << number << std::endl; } };

        myA(15);

        return 0;
    }
```

_3rd_

```cpp
    #include "math.hpp"
    #include <iostream>

    using namespace N;

    double Math::add(double a, double b)
    {
        auto result = a + b;
        return result;
    }

    double Math::remove(double a, double b)
    {
        return a - b;
    }

    double Math::multi(double a, double b)
    {
        return a * b;
    }

    double Math::divi(double a, double b)
    {
        return a / b;
    }
```

## Use/Run my example

To use my example, you must have [MinGW](https://sourceforge.net/projects/mingw/files/latest/download)

At first, when you will install g++ and prerequisites, you need have the extension on VS Code : 
- [C / C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) 
- [Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner)

Then, you need open a console prompte and write : 

1st:

    cd (THE PROJECT WITH THE FILE.CPP)

2nd : 

    g++ (YOUR FILE.cpp)

3rd : 

    OPEN THE FILE.exe IN A CONSOLE PROMPTE


To finish, if you need execute 2 or more files : 

    g++ (FIRST FILE.cpp) (SECOND FILE.cpp) (...)


## Links

- [Program WebSite](https://program132.github.io/)
- [Discord Server](https://discord.com/invite/dkkPWZmS92)