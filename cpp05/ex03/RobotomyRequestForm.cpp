#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm(72, 45, false, "RobotomyRequestForm"), target("default")
{
    std::cout << "RobotomyRequestForm Default Constructor called" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(std::string const target) : AForm(72, 45, false, "RobotomyRequestForm"), target(target)
{
    std::cout << "RobotomyRequestForm Constructor for target " << this->getTarget() << " called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) : AForm(other), target(other.target)
{
    std::cout << "RobotomyRequestForm Copy Constructor called" << other.getName() <<
    " into " << this->getName() << std::endl;
    *this = other;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm Deconstructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    std::cout << "RobotomyRequestForm Assignation operator called" << std::endl;
    if (this != &other)
        this->target = other.target;
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    else if (!this->getIsSigned())
        throw AForm::FormNotSigned();
    std::cout << "Drilling noises, fgjhfjjh dfgf" << this->getTarget() << "  has been successfully robotomized 50% of the time." << std::endl;
}

std::string RobotomyRequestForm::getTarget(void)const
{
    return this->target;
}

std::ostream & operator<<(std::ostream &o, RobotomyRequestForm &obj)
{
    o << obj.getName() << ", grade " << obj.getGradeToSign() <<  ", exec grade "<< obj.getGradeToExecute() << ", sign " << obj.getIsSigned() << ".\n";
    return (o);
}