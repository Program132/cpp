#ifndef FLUX_HPP
#define FLUX_HPP

#include <string>

namespace N
{
	class Flux
	{
	public:
		std::string read(std::string file);
		void write(std::string file, std::string arg);
	};
}

#endif