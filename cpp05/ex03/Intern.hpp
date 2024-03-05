#ifndef INTERN_HPP
# define INTERN_HPP


#include <iostream>
#include <string>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

class AForm;

class Intern
{
	public:
		Intern();
		Intern(const Intern&a);
		~Intern();
		Intern& operator = (const Intern&a);
		AForm *makeForm(const std::string formName, const std::string formTarget);
};

#endif