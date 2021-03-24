#ifndef MATH_HPP
#define MATH_HPP

namespace N
{
	class Math
	{
	public:
		template <typename m>
		m add(m const& a, m const& b)
		{
			return a + b;
		}
		template <typename m>
		m remove(m const& a, m const& b)
		{
			return a - b;
		}
		template <typename m>
		m multi(m const& a, m const& b)
		{
			return a * b;
		}
		template <typename m>
		m divi(m const& a, m const& b)
		{
			return a / b;
		}
	};
}

#endif