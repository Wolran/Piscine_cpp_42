#include <iostream>
#include <string>
#include <cstdlib>
#include <cfloat>
#include <sstream>
#include <cmath>

int	isANumber(char c)
{
	return (c >= '0' && c <= '9');
}

void	putNotAType()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

int	notAType(char *str)
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

void	putChar(double valueDouble, char *str)
{
	std::cout << "char: ";
	if (str && str[0] && !str[1] && !isANumber(str[0]))
		std::cout << str[0];
	else if (valueDouble <= 31 && valueDouble >= 0)
		std::cout << "Non displayable";
	else if (valueDouble < 0 || valueDouble >= 127 || !(valueDouble >= 0 || valueDouble <= 0))
		std::cout << "Impossible";
	else
		std::cout << static_cast<char>(valueDouble);
	std::cout << std::endl;
}

void	putInt(double valueDouble, char *str)
{
	std::cout << "int: ";

	int	res = static_cast<int>(valueDouble);
	if (!(valueDouble >= 0 || valueDouble <= 0))
		std::cout << "Impossible";
	else if (res == -2147483648 && valueDouble != -2147483648)
		std::cout << "Impossible";
	else if (str && str[0] && !isANumber(str[0]))
		std::cout << static_cast<int>(str[0]);
	else
		std::cout << res;
	std::cout << std::endl;
}

void	putDouble(double valueDouble, char *str)
{
	std::cout << "double: ";
	if (str && str[0] && !isANumber(str[0]) && !str[1])
		std::cout << static_cast<double>(str[0]);
	else
		std::cout << valueDouble;
	std::cout << std::endl;
}

void	putFloat(double valueDouble, char *str)
{
	std::string	str2(str);
	float	valueFloat = static_cast<float>(valueDouble);
	std::cout << "float: ";
	if (str && str[0] && !isANumber(str[0]) && !str[1])
		std::cout << static_cast<double>(str[0]);
	else
		std::cout << valueFloat;
	std::cout << "f" << std::endl;
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
	double	valueDouble = std::strtod(argv[1], 0);

	putChar(valueDouble, argv[1]);
	putInt(valueDouble, argv[1]);
	putFloat(valueDouble, argv[1]);
	putDouble(valueDouble, argv[1]);
	return (0);
}
