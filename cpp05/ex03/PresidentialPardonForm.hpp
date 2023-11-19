#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class	PresidentialPardonForm : public AForm {

	private :
		std::string	_target;
	public :
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm &p);
		PresidentialPardonForm &operator=(PresidentialPardonForm &p);
		~PresidentialPardonForm(void);

		std::string	getTarget(void);
		void	execute(Bureaucrat const & executor) const;
};

#endif
