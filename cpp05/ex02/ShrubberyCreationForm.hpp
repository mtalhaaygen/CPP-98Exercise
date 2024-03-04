#ifndef SHURBBERYCREATIONFORM_HPP
#define SHURBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

// classes
class Bureaucrat;
class AForm;

class ShrubberyCreationForm : public AForm
{
	private:
		std::string target;
	public:
	// constructors
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
	// destructor
		~ShrubberyCreationForm();
	// operator overloads
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
	// execute
		void execute(Bureaucrat const & executor) const;
	// getter
		std::string getTarget(void)const;
};
std::ostream & operator<<(std::ostream &o, ShrubberyCreationForm &obj);

#endif