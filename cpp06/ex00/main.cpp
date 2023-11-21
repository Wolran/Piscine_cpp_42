#include "ScalarConverter.hpp"

int	isANumber(char c)
{
	return (c >= '0' && c <= '9');
}

static void	putNotAType()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

static int	notAType(char *str)
{
	int	countPoint = 0;

	std::string	str2(str);
	if (str2 == "nan" || str2 == "nanf" || str2 == "-inf"
		|| str2 == "+inf" || str2 == "-inff" || str2 == "+inff" ||
		str2 == "inf" || str2 == "inff" || (str[0] && !str[1]))
		return (0);
	for (int i = (str[0] == '-' || str[0] == '+'); str[i]; i++)
	{
		if (str[i] == '.' && countPoint == 1)
			return (1);
		else if (str[i] == '.' && countPoint == 0)
			countPoint = 1;
		else if (str[i] == 'f' && !str[i + 1])
			return (0);
		else if (!isANumber(str[i]))
				return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Should have one arg only" << std::endl;
		return (1);
	}
	if (!argv[0][1])
	{
		std::cout << "String should not be empty" << std::endl;
		return (1);
	}
	if (notAType(argv[1]))
	{
		putNotAType();
		return (0);
	}
	std::string str(argv[1]);
	ScalarConverter::convert(str);
	return (0);
}
