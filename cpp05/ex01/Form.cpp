#include "Form.hpp"

Form::Form() : name("default"), gradeToSign(150), gradeToExecute(150), isSigned(false)
{
	// std::cout << "Form default constructor called" << std::endl;
}
Form::Form(int gradeToExecute, int gradeToSign, bool isSigned, std::string name) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute), isSigned(isSigned)
{
	// std::cout << "Form constructor called" << std::endl;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw Bureaucrat::GradeTooLowException();
}

Form::Form(const Form &a) : name(a.name), gradeToSign(a.gradeToSign), gradeToExecute(a.gradeToExecute)
{
	// std::cout << "Form copy constructor called" << std::endl;
	*this = a;
}

Form &Form::operator=(const Form &a)
{
	// std::cout << "Form assignation operator called" << std::endl;
	if (this != &a)
	{
		// this->name = a.name;
		// this->gradeToExecute = a.gradeToExecute;
		// this->gradeToSign = a.gradeToSign;
		this->isSigned = a.isSigned;
	}
	return (*this);
}

Form::~Form() 
{
	// std::cout << "Form destructor called" << std::endl;
}

const std::string Form::getName(void)const
{
	return this->name;
}

int Form::getGradeToSign(void)const
{
	return this->gradeToSign;
}

int Form::getGradeToExecute(void)const
{
	return this->gradeToExecute;
}

bool Form::getIsSigned(void)const
{
	return this->isSigned;
}

void Form::beSigned(Bureaucrat &a)
{
	if (this->isSigned == true)
		std::cout << "Form is already signed\n";
	else if(this->getGradeToSign() < a.getGrade())
		throw GradeTooLowException();
	else
	{
		std::cout << "Form is signed\n";
		this->isSigned = true;
	}
}

const char * Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char * Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}


std::ostream & operator<<(std::ostream &o, Form const &obj)
{
	o << obj.getName() << ", form grade " << obj.getGradeToSign() <<  ", form exec grade "<< obj.getGradeToExecute() << ", form sign " << obj.getIsSigned() << ".\n";
	return (o);
}