#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class	Form {

	private :
		std::string 	_name;
		bool			_isSigned;
		int				_gradeToS;
		int				_gradeToX;
	public :
		Form(void);
		Form(std::string name, bool isSigned, int gradeToS, int gradeToX);
		Form(const Form &f);
		Form &operator=(const Form &f);
		~Form(void);

		std::string	getName();
		bool		getFormState();
		int			getGradeToS();
		int			getGradeToX();
		void		beSigned(Bureaucrat &b);

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

std::ostream &operator<<(std::ostream &out, Form &f);

#endif
