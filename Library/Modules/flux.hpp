#ifndef FLUX_HPP
#define FLUX_HPP

#include <string>

namespace N
{
	class Flux
	{
	public:
		std::string read(std::string const& file);
		void write(std::string const& file, std::string const& arg);
	};
}

#endif