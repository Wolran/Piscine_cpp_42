#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template<class T> void print(T & elem)
{
	std::cout << elem << std::endl;
}

template<class T> void iter(T tab[], std::size_t size, void (*fun)(T &))
{
	for (std::size_t i = 0;i < size;i++)
		fun(tab[i]);
}

#endif
