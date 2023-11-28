#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <list>
# include <algorithm>

template <typename T>
typename T::iterator	easyfind(T &container, int nb)
{
	typename T::iterator it;
	it = std::find(container.begin(), container.end(), nb);

	if (it == container.end())
		throw (std::out_of_range("Number not in array"));
	return (it);
}

#endif
