#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int	main()
{
	Bureaucrat				Tom("Tom", 150);
	Bureaucrat				Platz("Platz", 1);
	PresidentialPardonForm	form1("Form1");
	RobotomyRequestForm		form2("Form2");
	ShrubberyCreationForm	form3("Form3");

	try
	{
		form1.beSigned(Platz);
		Platz.executeForm(form1);
		Tom.executeForm(form1);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		form2.beSigned(Platz);
		Platz.executeForm(form2);
		Tom.executeForm(form2);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		form3.beSigned(Platz);
		Platz.executeForm(form3);
		Tom.executeForm(form3);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
