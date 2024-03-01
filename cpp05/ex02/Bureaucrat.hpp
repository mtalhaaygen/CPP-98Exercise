#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"
class AForm;
class Bureaucrat
{
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat ();
		Bureaucrat (int grade, std::string name);
		~Bureaucrat ();
		Bureaucrat (const Bureaucrat &a);
		Bureaucrat &operator = (const Bureaucrat &a);
		const std::string getName(void)const;
		int getGrade(void)const;
		void incrementGrade();
		void decrementGrade();
		void signForm(AForm &Aform);
		void executeForm(AForm const &Aform);
		class GradeTooLowException : public std::runtime_error
		{
			public:
				GradeTooLowException():std::runtime_error("Grade is too low"){};
		};
		class GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw();
		};
};

std::ostream & operator<<(std::ostream &o, Bureaucrat const &obj);

#endif


