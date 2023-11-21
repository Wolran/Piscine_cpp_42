#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("unnamed", 0, 25, 5)
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &p) : AForm(p), _target(p.getTarget())
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 0, 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm constructor with target called" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm &p)
{
	_isSigned = p.getFormState();
	_target = p.getTarget();
	std::cout << "PresidentialPardonForm copy assignment operator called" << std::endl;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

std::string	PresidentialPardonForm::getTarget(void)
{
	return (_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > _gradeToX)
		throw (GradeTooLowException());
	if (_isSigned == 0)
		throw (NotSignedFormException());
	std::cout << _target << " has been pardonned by Ronnie Coleman" << std::endl;
}
