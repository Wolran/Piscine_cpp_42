#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
# include "AForm.hpp"
class AForm;

class	Bureaucrat {

	private :
		std::string const	_name;
		int					_grade;
		int static const	_minGrade = 150;
		int static const	_maxGrade = 1;
	public :
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &b);
		Bureaucrat &operator=(const Bureaucrat &b);
		~Bureaucrat(void);
		std::string const	getName(void) ;
		int					getGrade(void) const;
		void				upGrade(void);
		void				downGrade(void);
		void				signForm(AForm &f);
		void				executeForm(AForm const & form);

		class GradeTooHighException : public	std::exception
		{
			public :
				const char	*what(void) const throw();
		};

		class GradeTooLowException : public	std::exception
		{
			public :
				const char	*what(void) const throw();
		};

};

std::ostream &operator<<(std::ostream &out, Bureaucrat &b);
#endif
