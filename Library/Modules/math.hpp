#ifndef MATH_HPP
#define MATH_HPP

namespace N
{
	class Math
	{
	public:
		template <typename m>
		m add(m a, m b)
		{
			return a + b;
		}
		template <typename m>
		m remove(m a, m b)
		{
			return a - b;
		}
		template <typename m>
		m multi(m a, m b)
		{
			return a * b;
		}
		template <typename m>
		m divi(m a, m b)
		{
			return a / b;
		}
	};
}

#endif