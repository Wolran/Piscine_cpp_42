# include "easyfind.hpp"

int	main()
{
	std::vector<int>	array;
	std::vector<int>::iterator	it;
	int	good_nbr = 19;
	int	wrong_nbr = 100;

	for (int i = 0; i < 100; i++)
		array.push_back(i);
	std::cout << "array : ";
	for (int i = 0; i < 100; i++)
	{
		std::cout << array[i];
		if (i < 99)
			std::cout << ", ";
	}
	std::cout << std::endl;
	try
	{
		it = easyfind(array, good_nbr);
		std::cout << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		it = easyfind(array, wrong_nbr);
		std::cout << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
