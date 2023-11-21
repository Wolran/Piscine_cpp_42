#include "RobotomyRequestForm.hpp"
#include <cmath>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("unnamed", 0, 72, 45), _target("undefined target")
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &r) : AForm(r), _target(r.getTarget())
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 0, 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm constructor with target called" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm &r)
{
	_isSigned = r.getFormState();
	_target = r.getTarget();
	std::cout << "RobotomyRequestForm copy assignment operator called" << std::endl;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

std::string	RobotomyRequestForm::getTarget(void)
{
	return (_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > _gradeToX)
		throw (GradeTooLowException());
	if (_isSigned == 0)
		throw (NotSignedFormException());
	srand(std::time(NULL));
	int	random = rand() % 2;
	if (random == 0)
		std::cout << "*Drill sound* " <<  _target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "*Drill sound* " << _target << " has failed to be robotomized." << std::endl;
}
