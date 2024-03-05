#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

// classes
class Bureaucrat;
class AFrom;

class RobotomyRequestForm : public AForm
{
	private:
		std::string target;
	public:
	// constructors
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& other);
	// destructor
		~RobotomyRequestForm();
	// operator overloads
		RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
	// execute
		void execute(Bureaucrat const & executor) const;
	// getter
		std::string getTarget(void)const;
}; 

std::ostream & operator<<(std::ostream &o, RobotomyRequestForm &obj);

#endif