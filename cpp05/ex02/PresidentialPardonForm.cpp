#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm(25, 5, false, "PresidentialPardonForm"), target("default")
{
	std::cout << "PresidentialPardonForm Default Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) : AForm(25, 5, false, "PresidentialPardonForm"), target(target)
{
	std::cout << "PresidentialPardonForm Constructor for target " << this->getTarget() << " called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other) : AForm(other), target(other.target)
{
	std::cout << "PresidentialPardonForm Copy Constructor called" << other.getName() <<
	" into " << this->getName() << std::endl;
	*this = other;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm Deconstructor called" << std::endl;

}

// operator overloads
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	std::cout << "PresidentialPardonForm Assignation operator called" << std::endl;
	if (this != &other)
		this->target = other.target;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	else if (!this->getIsSigned())
		throw AForm::FormNotSigned();
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;

}
std::string PresidentialPardonForm::getTarget(void)const
{
	return this->target;
}

std::ostream & operator<<(std::ostream &o, PresidentialPardonForm &obj)
{
	o << obj.getName() << ", grade " << obj.getGradeToSign() <<  ", exec grade "<< obj.getGradeToExecute() << ", sign " << obj.getIsSigned() << ".\n";
	return (o);
}