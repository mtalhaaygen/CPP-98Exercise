#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

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
		class GradeTooLowException : public std::exception
		{
			const char *what() const throw();
		};
		class GradeTooHighException : public std::exception
		{
			const char *what() const throw();
		};
};

std::ostream & operator<<(std::ostream &o, Bureaucrat const &obj);

#endif


