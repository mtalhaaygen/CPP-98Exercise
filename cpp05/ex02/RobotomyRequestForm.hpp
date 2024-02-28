#ifndef ROBOTMYREQUESTFORM_HPP
#define ROBOTMYREQUESTFORM_HPP

#include <iostream>
#include "AForm.hpp"

class RobotmyRequestForm : public AForm
{
	private:
		std::string target;
	public:
		RobotmyRequestForm();
		~RobotmyRequestForm();
		RobotmyRequestForm(std::string target);
		RobotmyRequestForm& operator=(const RobotmyRequestForm& other);
		RobotmyRequestForm(const RobotmyRequestForm& other);

		void execute(Bureaucrat const & executor) const;
		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw();
		};
}; 

#endif