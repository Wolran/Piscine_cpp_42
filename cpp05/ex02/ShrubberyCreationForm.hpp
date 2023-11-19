#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class	ShrubberyCreationForm : public AForm {

	private :
		std::string	_target;
	public :
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm &s);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm &s);
		~ShrubberyCreationForm(void);

		std::string	getTarget(void);
		void	execute(Bureaucrat const & executor) const;

		class FileNotOpenException : public std::exception
		{
			public :
				const char	*what(void) const throw();
		};
};

#endif
