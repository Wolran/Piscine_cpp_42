#include "iter.hpp"

int main( void )
{
	int	tab[] = {0, 1, 2, 3, 4};
	std::string	tab2[] = {"I", "AM", "TOM", "PLATZ"};

	iter(tab, 5, print);
	std::cout << std::endl;
	iter(tab2, 4, print);
	return 0;
}
