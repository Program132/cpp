#ifndef TAB_HPP
#define TAB_HPP

#include <iostream>
#include <string>
#include <vector>
#include <array>

namespace N
{    
    class Tab
    {
        public:
            template <typename tab>
            void show(tab const target)
            {
                for (auto const e : target)
                {
                    std::cout << e << std::endl;
                }
            }
            template <typename tab>
        	std::string getCase(tab const target, int i)
            {
				std::string a = target[i];
				return a;
            }
    };
}

#endif