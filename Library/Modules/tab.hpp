#ifndef TAB_HPP
#define TAB_HPP

#include <string>
#include <vector>

namespace N
{
	class Tab
	{
	public:
		std::string strSTab(std::vector<std::string> tab);
		int strITab(std::vector<int> tab);
		double strDTab(std::vector<double> tab);
		char strCTab(std::vector<char> tab);
	};
}

#endif