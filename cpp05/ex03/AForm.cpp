#include "AForm.hpp"

AForm::AForm() : name("default"), gradeToSign(150), gradeToExecute(150), isSigned(false)
{
	// std::cout << "AForm default constructor called" << std::endl;
}
AForm::AForm(int gradeToExecute, int gradeToSign, bool isSigned, std::string name) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute), isSigned(isSigned)
{
	// std::cout << "AForm constructor called" << std::endl;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw Bureaucrat::GradeTooLowException();
}

AForm::AForm(const AForm &a) : name(a.name), gradeToSign(a.gradeToSign), gradeToExecute(a.gradeToExecute)
{
	// std::cout << "AForm copy constructor called" << std::endl;
	*this = a;
}

AForm &AForm::operator=(const AForm &a)
{
	// std::cout << "AForm assignation operator called" << std::endl;
	if (this != &a)
	{
		// this->name = a.name;
		// this->gradeToExecute = a.gradeToExecute;
		// this->gradeToSign = a.gradeToSign;
		this->isSigned = a.isSigned;
	}
	return (*this);
}

AForm::~AForm() 
{
	// std::cout << "AForm destructor called" << std::endl;
}

const std::string AForm::getName(void)const
{
	return this->name;
}

int AForm::getGradeToSign(void)const
{
	return this->gradeToSign;
}

int AForm::getGradeToExecute(void)const
{
	return this->gradeToExecute;
}

bool AForm::getIsSigned(void)const
{
	return this->isSigned;
}

void AForm::beSigned(Bureaucrat &a)
{
	if (this->isSigned == true)
		std::cout << "AForm is already signed\n";
	else if(this->getGradeToSign() < a.getGrade())
		throw GradeTooLowException();
	else
	{
		std::cout << "AForm is signed\n";
		this->isSigned = true;
	}
}

const char * AForm::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char * AForm::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

const char * AForm::FormNotSigned::what() const throw()
{
	return "Form is not signed";
}

std::ostream & operator<<(std::ostream &o, AForm const &obj)
{
	o << obj.getName() << ", Aform grade " << obj.getGradeToSign() <<  ", Aform exec grade "<< obj.getGradeToExecute() << ", Aform sign " << obj.getIsSigned() << ".\n";
	return (o);
}