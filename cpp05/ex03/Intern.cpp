#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern Default Constructor called" << std::endl;
}

Intern::Intern(const Intern &src)
{
	std::cout << "Intern Copy Constructor called" << std::endl;
	*this = src;
}

Intern::~Intern()
{
	std::cout << "Intern Deconstructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &src)
{
	std::cout << "Intern Assignation operator called" << std::endl;
	if (this == &src)
		return *this;
	// nothing to copy here, since intern has no variables
	return *this;
}

// static functions for makeForm
AForm	*makePresident(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm	*makeRobot(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm	*makeShrubbery(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm	*Intern::makeForm(const std::string formName, const std::string formTarget)
{
	AForm *(*all_forms[])(const std::string target) = {&makePresident, &makeRobot, &makeShrubbery};
	std::string forms[] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};

	for (int i = 0; i < 3; i++)
	{
		if (formName == forms[i])
		{
			std::cout << "Intern creates " << formName << " now" << std::endl;
			return (all_forms[i](formTarget));
		}
	}

	std::cout << "\033[33mIntern can not create a form called " << formName << "\033[0m" << std::endl;
	return (NULL);
}