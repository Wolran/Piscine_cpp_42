#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	Tom("Tom", 150);
	Bureaucrat	Platz("Platz", 1);

	try
	{
		Bureaucrat Ronnie("Ronnie", -10);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat Ronnie("Ronnie", 151);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Tom.downGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Platz.upGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Tom.upGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Platz.downGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << Tom << std::endl;
	std::cout << Platz << std::endl;
	return (0);
}
