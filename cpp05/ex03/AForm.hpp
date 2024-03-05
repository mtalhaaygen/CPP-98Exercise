#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string name;
		const int gradeToSign;
		const int gradeToExecute;
		bool isSigned;
	public:
		AForm();
		AForm(int gradeToExecute, int gradeToSign, bool isSigned, std::string name);
		AForm(const AForm &a);
		AForm &operator=(const AForm &a);
		virtual ~AForm();
		const std::string getName(void)const;
		int getGradeToSign(void)const;
		int getGradeToExecute(void)const;
		bool getIsSigned(void)const;
		void beSigned(Bureaucrat &a);
		virtual void execute(Bureaucrat const& executor) const = 0;
		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class FormNotSigned : public std::exception
		{
			public:
				const char* what() const throw();
		};
};
std::ostream & operator<<(std::ostream &o, AForm const &obj);

#endif