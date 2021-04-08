#include <unordered_map>
#include <string_view>
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

std::vector<std::string> split(std::string_view string, char delim) 
{
    std::vector<std::string> output{};
    std::size_t first{ 0u };

    while (first < string.size()) {
        const auto second = string.find_first_of(delim, first);

        if (first != second) output.emplace_back(string.substr(first, second - first));

        if (second == std::string_view::npos) break;

        first = second + 1;
    }

    return output;
}

int main() 
{
    std::ifstream file{ "f1.txt" };

    std::string line;
    while(std::getline(file, line)) 
    {
        auto words = split(line, ' ');

        if(std::size(words) > 2u && words[0] == "pr") 
        {
            for(auto i = 2u;i < std::size(words); ++i)
                std::cout << words[i] << " \n";
        } else std::cout << "Ligne invalide\n";
    }

    std::cout << std::flush;

    return 0;
}