#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class	Intern {

	private :

	public :
		Intern(void);
		Intern(const Intern &i);
		Intern &operator=(const Intern &i);
		~Intern(void);
		AForm	*makeForm(std::string formName, std::string formTarget);
		AForm	*createShrubberyCreationForm(const std::string &target) const;
		AForm	*createRobotomyRequestForm(const std::string &target) const;
		AForm	*createPresidentialPardonForm(const std::string &target) const;

};

#endif
