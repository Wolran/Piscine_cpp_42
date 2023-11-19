#include "Form.hpp"

Form::Form(void) :
_name("unnamed"),
_isSigned(0),
_gradeToS(42),
_gradeToX(21)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const Form &f) :
_name(f._name),
_isSigned(f._isSigned),
_gradeToS(f._gradeToS),
_gradeToX(f._gradeToX)
{
	std::cout << "Form copy constructor called" << std::endl;
}

Form::Form(std::string name, bool isSigned, int gradeToS, int gradeToX) :
_name(name),
_isSigned(isSigned),
_gradeToS(gradeToS),
_gradeToX(gradeToX)
{
	std::cout << "Form constructor with params called" << std::endl;
}

Form	&Form::operator=(const Form &f)
{
	_name = f._name;
	_isSigned = f._isSigned;
	_gradeToS = f._gradeToS;
	_gradeToX = f._gradeToX;
	std::cout << "Form copy assignment operator called" << std::endl;
	return (*this);
}

Form::~Form(void)
{
	std::cout << "Form destructor called" << std::endl;
}

const char	*Form::GradeTooHighException::what( void ) const throw()
{
	return ("Exception: Grade too high!");
}

const char	*Form::GradeTooLowException::what( void ) const throw()
{
	return ("Exception: Grade too low!");
}

std::string	Form::getName()
{
	return (_name);
}
bool	Form::getFormState()
{
	return (_isSigned);
}
int	Form::getGradeToS()
{
	return (_gradeToS);
}
int	Form::getGradeToX()
{
	return (_gradeToX);
}

void	Form::beSigned(Bureaucrat &b)
{
	if (_gradeToS < b.getGrade())
		throw (GradeTooLowException());
	if (_isSigned == 0)
		std::cout << _name << " form has been signed by " << b.getName() << std::endl;
	_isSigned = 1;
}

std::ostream &operator<<(std::ostream &out, Form &f)
{
	if (f.getFormState() == 1)
		out << "Signed";
	else
		out << "Not signed";
	out << " form " << f.getName() << " has a grade to sign of " << f.getGradeToS() << " and a grade to execute of " << f.getGradeToX();
	return (out);
}
