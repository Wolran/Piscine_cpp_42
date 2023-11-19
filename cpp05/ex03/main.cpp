#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
    Bureaucrat Tom_Platz("Tom_Platz", 1);
    Intern slave;
    AForm *form1;
    
    try
    {
        form1 = slave.makeForm("shrubbery creation", "test");

        if (form1 != NULL)
        {
            try
            {
                form1->beSigned(Tom_Platz);
                form1->execute(Tom_Platz);
            }
            catch (const AForm::GradeTooLowException &e)
            {
                std::cout << "Exception caught: " << e.what() << std::endl;
            }

            delete form1;
        }
        else
        {
            std::cout << "Form creation failed" << std::endl;
        }
    }
    catch (const std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
