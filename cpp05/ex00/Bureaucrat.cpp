#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Undefinded"), _grade(1)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade > _minGrade)
		throw (GradeTooLowException());
	else if (grade < _maxGrade)
		throw (GradeTooHighException());
	std::cout << "Bureaucrat constructor with params called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &b) : _name(b._name), _grade(b._grade)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &b)
{
	_grade = b._grade;
	std::cout << "Bureaucrat copy assignment operator called" << std::endl;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

std::string const	Bureaucrat::getName(void)
{
	return (_name);
}

int	Bureaucrat::getGrade(void)
{
	return (_grade);
}

void	Bureaucrat::upGrade(void)
{
	if (_grade - 1 < _maxGrade)
		throw (GradeTooHighException());
	_grade--;
}

void	Bureaucrat::downGrade(void)
{
	if (_grade + 1 > _minGrade)
		throw (GradeTooLowException());
	_grade++;
}

const char	*Bureaucrat::GradeTooHighException::what( void ) const throw()
{
	return ("Exception: Grade too high!");
}

const char	*Bureaucrat::GradeTooLowException::what( void ) const throw()
{
	return ("Exception: Grade too low!");
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return (out);
}
