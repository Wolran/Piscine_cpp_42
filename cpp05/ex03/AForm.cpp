#include "AForm.hpp"

AForm::AForm(void) :
_name("unnamed"),
_isSigned(0),
_gradeToS(42),
_gradeToX(21)
{
	std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(const AForm &f) :
_name(f._name),
_isSigned(f._isSigned),
_gradeToS(f._gradeToS),
_gradeToX(f._gradeToX)
{
	std::cout << "AForm copy constructor called" << std::endl;
}

AForm::AForm(std::string name, bool isSigned, int gradeToS, int gradeToX) :
_name(name),
_isSigned(isSigned),
_gradeToS(gradeToS),
_gradeToX(gradeToX)
{
	std::cout << "AForm constructor with params called" << std::endl;
}

AForm	&AForm::operator=(const AForm &f)
{
	_isSigned = f._isSigned;
	std::cout << "AForm copy assignment operator called" << std::endl;
	return (*this);
}

AForm::~AForm(void)
{
	std::cout << "AForm destructor called" << std::endl;
}

const char	*AForm::GradeTooHighException::what( void ) const throw()
{
	return ("Exception: Grade too high!");
}

const char	*AForm::GradeTooLowException::what( void ) const throw()
{
	return ("Exception: Grade too low!");
}

const char	*AForm::NotSignedFormException::what( void ) const throw()
{
	return ("Exception: form not signed !");
}

std::string	AForm::getName() const
{
	return (_name);
}
bool	AForm::getFormState() const
{
	return (_isSigned);
}
int	AForm::getGradeToS() const
{
	return (_gradeToS);
}
int	AForm::getGradeToX() const
{
	return (_gradeToX);
}

void	AForm::beSigned(Bureaucrat &b)
{
	if (_gradeToS < b.getGrade())
		throw (GradeTooLowException());
	if (_isSigned == 0)
		std::cout << _name << " AForm has been signed by " << b.getName() << std::endl;
	_isSigned = 1;
}

std::ostream &operator<<(std::ostream &out, AForm &f)
{
    out << (f.getFormState() == 1 ? "Signed" : "Not signed");
    out << " AForm " << f.getName() << " has a grade to sign of " << f.getGradeToS();
    out << " and a grade to execute of " << f.getGradeToX();
    return out;
}
