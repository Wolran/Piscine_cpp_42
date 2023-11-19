#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class	RobotomyRequestForm : public AForm {

	private :
		std::string	_target;
	public :
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm &r);
		RobotomyRequestForm &operator=(RobotomyRequestForm &r);
		~RobotomyRequestForm(void);

		std::string	getTarget(void);
		void	execute(Bureaucrat const & executor) const;
};

#endif
