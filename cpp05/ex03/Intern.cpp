#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern &i)
{
	(void) i;
	std::cout << "Intern copy constructor called" << std::endl;
}

Intern	&Intern::operator=(const Intern &i)
{
	(void) i;
	std::cout << "Intern copy assignment operator called" << std::endl;
	return (*this);
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor called" << std::endl;
}

AForm	*Intern::createPresidentialPardonForm(const std::string &target) const
{
	return new PresidentialPardonForm(target);
}

AForm	*Intern::createRobotomyRequestForm(const std::string &target) const
{
	return new RobotomyRequestForm(target);
}

AForm	*Intern::createShrubberyCreationForm(const std::string &target) const
{
	return new ShrubberyCreationForm(target);
}

AForm	*Intern::makeForm(std::string formName, std::string formTarget)
{
	AForm *(Intern::*createFunctions[])(const std::string &target) const =
	{
		&Intern::createRobotomyRequestForm,
		&Intern::createPresidentialPardonForm,
		&Intern::createShrubberyCreationForm
	};

	std::string	tabString[3] = {"robotmy request", "presidential pardon", "shrubbery creation"};

	for (int i = 0; i < 3; i++)
	{
		if (tabString[i] == formName)
		{
			try
			{
				AForm	*form = (this->*createFunctions[i])(formTarget);
				std::cout << "Intern creates " << formName << std::endl;
				return (form);
			}
			catch (std::exception &e)
			{
				std::cout << e.what() << std::endl;
			}
		}
	}
	std::cout << "Intern coudn't create form" << std::endl;
	return (NULL);
}
