#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>
# include <stdexcept>

template <typename T>
class	Array
{
	private:
		T	*_tab;
		unsigned int _size;
	public:
		Array(){_tab = NULL; _size = 0;};

		Array(unsigned int nb) : _size(nb)
		{
			if (_size > 0)
				_tab = new (std::nothrow)T[nb];
			else
				_tab = NULL;
			if (_tab == NULL)
				_size = 0;
		};

		Array(Array const &other) : _size(other._size)
		{
			if (_size > 0)
				_tab = new (std::nothrow)T[_size];
			else
				_tab = NULL;
			if (_tab == NULL)
				_size = 0;
			for (int i = 0; i < _size; i++)
				_tab[i] = other._tab[i];
		};

		Array &operator=(Array const &other)
		{
			if (_size > 0)
				delete [] _tab;
			_size = other._size;
			if (_size > 0)
				_tab = new (std::nothrow)T[_size];
			else
				_tab = NULL;
			if (_tab == NULL)
				_size = 0;
			for (int i = 0; i < _size; i++)
				_tab[i] = other._tab[i];
			return (*this);
		};

		~Array()
		{
			if (_size > 0)
				delete [] _tab;
		};

		T &operator[](unsigned int n)
		{
			if (n < _size)
				return (_tab[n]);
			throw(std::range_error("Array index out of range"));
		};

		unsigned int	size()
		{
			return (_size);
		};
};

#endif
