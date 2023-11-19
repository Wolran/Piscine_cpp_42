#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	Tom_Platz("Tom_Platz", 150);
	Bureaucrat	Ronnie_Coleman("Ronnie_Coleman", 143);
	Bureaucrat	Cbum("Cbum", 1);
	Form		form1("form 1", 0, 142, 50);
	Form		form2("form 2", 0, 143, 50);
	try
	{
		form1.beSigned(Ronnie_Coleman);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		form2.beSigned(Ronnie_Coleman);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	Ronnie_Coleman.signForm(form1);
	Cbum.signForm(form1);
	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;
	return (0);
}
