#include "ScalarConverter.hpp"

void	putChar(double valueDouble, const char *str)
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

void	putInt(double valueDouble, const char *str)
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

void	putDouble(double valueDouble, const char *str)
{
	std::cout << "double: ";
	if (str && str[0] && !isANumber(str[0]) && !str[1])
		std::cout << static_cast<double>(str[0]);
	else
		std::cout << valueDouble;
	std::cout << std::endl;
}

void	putFloat(double valueDouble, const char *str)
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

void	ScalarConverter::convert(std::string str)
{
	const char *str2 = str.c_str();
	double	valueDouble = std::strtod(str2, 0);

	putChar(valueDouble, str2);
	putInt(valueDouble, str2);
	putFloat(valueDouble, str2);
	putDouble(valueDouble, str2);
}
