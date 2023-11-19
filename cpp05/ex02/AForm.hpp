#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class	AForm {

	protected :
		std::string const	_name;
		bool				_isSigned;
		int	const			_gradeToS;
		int	const			_gradeToX;
	public :
		AForm(void);
		AForm(std::string name, bool isSigned, int gradeToS, int gradeToX);
		AForm(const AForm &f);
		AForm &operator=(const AForm &f);
		virtual	~AForm(void);

		std::string		getName() const;
		bool			getFormState() const;
		int				getGradeToS() const;
		int				getGradeToX() const;
		void			beSigned(Bureaucrat &b);
		virtual void	execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException : public std::exception
		{
			public :
				const char	*what(void) const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public :
				const char	*what(void) const throw();
		};

		class NotSignedFormException : public std::exception
		{
			public :
				const char	*what(void) const throw();
		};
};

std::ostream &operator<<(std::ostream &out, AForm &f);

#endif
