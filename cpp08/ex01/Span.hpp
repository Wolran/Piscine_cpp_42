#ifndef SPAN_HPP
# define SPAN_HPP

# include <exception>
# include <cmath>
# include <iterator>
# include <vector>
# include <algorithm>
# include <iostream>

class	Span {

	private :
		std::vector<int>	_array;
		unsigned int		_size;
		unsigned int		_amountElem;
	public :
		Span(void);
		Span(unsigned int size);
		Span(const Span &s);
		Span &operator=(const Span &s);
		~Span(void);
		void	addNumber(int nb);
		int		shortestSpan();
		int		longestSpan();
		void	put();
		template<typename iter>
		void	addRangeNumbers(iter start, iter end)
		{
			while (start != end)
			{
				addNumber(*start);
				start++;
			}
		}

	class SpanFullException : public std::exception
	{
		public :
			const char	*what(void) const throw()
			{
				return ("Exception: Not enough space in Span");
			};
	};

	class NotEnoughNumberException : public std::exception
	{
		public :
			const char	*what(void) const throw()
			{
				return ("Exception: not enough numbers to see a difference");
			};
	};

};

#endif
