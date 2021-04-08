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
cout add(cout const& arg)
{
    coutContent.insert({"cout"s, arg});
}

void del()
{
    coutContent.erase("cout");
}

void send()
{
    for (auto const & paire : coutContent)
    {
        std::cout << paire.second << std::endl;
    }
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
            for (int i = 1; i < tab.size(); i++)
            {
                cc += tab[i];
                cc += " ";
            }
            del();
            add(cc);
            send();
        }
    }

    return 0;
}