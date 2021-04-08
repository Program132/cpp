#include <iostream>
#include <string>
#include <unordered_map>

using namespace std::literals;

std::unordered_map<std::string, std::string> coutContent
{
};

template <typename cout>
cout add(cout const& arg)
{
    coutContent.insert({"cout"s, arg});
}

void viewCout()
{
    for (auto const & paire : coutContent)
    {
        std::cout << "Ignore : " << paire.first << std::endl;
        std::cout << "Message : " << paire.second << std::endl;
    }
}

int main()
{
    
    std::string c1 = "Prorgam132 created this example.";
    std::cout << c1 << std::endl;
    add(c1);
    viewCout();

    return 0;
}