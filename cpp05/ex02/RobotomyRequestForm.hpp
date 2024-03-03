#ifndef ROBOTMYREQUESTFORM_HPP
#define ROBOTMYREQUESTFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

// classes
class Bureaucrat;
class From;

class RobotmyRequestForm : public AForm
{
	private:
		std::string target;
	public:
	// constructors
		RobotmyRequestForm(void);
		RobotmyRequestForm(std::string target);
		RobotmyRequestForm(const RobotmyRequestForm& other);
	// destructor
		~RobotmyRequestForm();
	// operator overloads
		RobotmyRequestForm& operator=(const RobotmyRequestForm& other);
	// execute
		void execute(Bureaucrat const & executor) const;
	// getter
		std::string getTarget(void)const;
}; 

std::ostream & operator<<(std::ostream &o, RobotmyRequestForm &obj);

#endif