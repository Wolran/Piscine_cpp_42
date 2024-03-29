#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <cfloat>
#include <sstream>
#include <iomanip> 
#include <cmath>

int		isANumber(char c);

class	ScalarConverter
{
	private :
		ScalarConverter();

	public :
		static void	convert(std::string str);
};

#endif
