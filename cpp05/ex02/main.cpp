#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#define RESET	"\e[0m"
#define GREEN	"\e[32m"

int main(void)
{
	try
    {
        ShrubberyCreationForm form("target");
        Bureaucrat jim(137, "Jim");
        jim.signForm(form);
        form.execute(jim);

		std::cout << GREEN << "-------------------" << RESET << std::endl;

		RobotomyRequestForm form2("target");
		Bureaucrat john(45, "John");
		john.signForm(form2);
		form2.execute(john);

		std::cout << GREEN << "-------------------" << RESET << std::endl;

		PresidentialPardonForm form3("target");
		Bureaucrat david(5, "David");
		david.signForm(form3);
		form3.execute(david);

        std::cout << GREEN << "-------------------" << RESET << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}