#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <unordered_map>
#include <iterator>

using namespace std::literals;

std::unordered_map<std::string, std::string> coutContent{};

template <typename cout>
cout add(cout const& name, cout const& value)
{
    coutContent.insert({name, value});
}

void send(auto const& arg)
{
    std::cout << coutContent[arg] << std::endl;
}

int main()
{
    std::ifstream myFile {"f1.txt"};

    std::string lignes;

    while (std::getline(myFile, lignes))
    {
        std::string cc;


        std::istringstream iss(lignes);
        std::vector<std::string> tab((std::istream_iterator<std::string>(iss)), std::istream_iterator<std::string>());

        if (tab[0] == "pr")
        {
            std::string name = tab[1];

            for (int i = 2; i < tab.size(); i++)
            {
                cc += tab[i];
                cc += ' ';
            }

            add(name, cc);
            send(name);
        }
    }

    return 0;
}