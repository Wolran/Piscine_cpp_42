#include "Span.hpp"

Span::Span(void) : _size(42), _amountElem(0)
{
	std::cout << "Span default constructor called" << std::endl;
}

Span::Span(unsigned int size) : _size(size), _amountElem(0)
{
	std::cout << "Span constructor with args called" << std::endl;
}

Span::Span(const Span &s) : _size(s._size), _amountElem(s._amountElem)
{
	_array = s._array;
	std::cout << "Span copy constructor called" << std::endl;
}

Span	&Span::operator=(const Span &s)
{
	_size = s._size;
	_amountElem = s._amountElem;
	_array = s._array;
	std::cout << "Span copy assignment operator called" << std::endl;
	return (*this);
}

Span::~Span(void)
{
	std::cout << "Span destructor called" << std::endl;
}

void	Span::addNumber(int nb)
{
	if (_amountElem >= _size)
		throw (SpanFullException());
	_array.push_back(nb);
	_amountElem++;
}

int	Span::shortestSpan()
{
	int	res;

	if (_amountElem < 2)
		throw (NotEnoughNumberException());
	res = std::abs(_array[0] - _array[1]);
	if (res == 0)
		return (0);
	for (unsigned int i = 0; i < _amountElem; i++)
	{
		for (unsigned int j = i + 1; j < _amountElem; j++)
		{
			if (std::abs(_array[j] - _array[i]) < res)
				res = std::abs(_array[j] - _array[i]);
		}
	}
	return (res);
}

int	Span::longestSpan()
{
	int	min;
	int	max;
	if (_amountElem < 2)
		throw (NotEnoughNumberException());
	min = _array[0];
	max = _array[0];
	for (unsigned int i = 0; i < _amountElem; i++)
	{
		if (_array[i] < min)
			min = _array[i];
	}
	for (unsigned int i = 0; i < _amountElem; i++)
	{
		if (_array[i] > max)
			max = _array[i];
	}
	return (max - min);
}

void	Span::put()
{
	for (unsigned int i = 0; i < _amountElem; i++)
	{
		std::cout << _array[i];
		if (i < _amountElem - 1)
			std::cout << ", ";
	}
	std::cout << std::endl;
}
