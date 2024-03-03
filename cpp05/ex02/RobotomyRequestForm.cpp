#include "RobotomyRequestForm.hpp"

RobotmyRequestForm::RobotmyRequestForm(void) : AForm(72, 45, false, "RobotmyRequestForm"), target("default")
{
    std::cout << "RobotmyRequestForm Default Constructor called" << std::endl;
}
RobotmyRequestForm::RobotmyRequestForm(std::string const target) : AForm(72, 45, false, "RobotmyRequestForm"), target(target)
{
    std::cout << "RobotmyRequestForm Constructor for target " << this->getTarget() << " called" << std::endl;
}

RobotmyRequestForm::RobotmyRequestForm(RobotmyRequestForm const &other) : AForm(other), target(other.target)
{
    std::cout << "RobotmyRequestForm Copy Constructor called" << other.getName() <<
    " into " << this->getName() << std::endl;
    *this = other;
}

RobotmyRequestForm::~RobotmyRequestForm() {
    std::cout << "RobotmyRequestForm Deconstructor called" << std::endl;
}

RobotmyRequestForm& RobotmyRequestForm::operator=(const RobotmyRequestForm& other)
{
    std::cout << "RobotmyRequestForm Assignation operator called" << std::endl;
    if (this != &other)
        this->target = other.target;
    return *this;
}

void RobotmyRequestForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    else if (!this->getIsSigned())
        throw AForm::FormNotSigned();
    std::cout << "Drilling noises, " << this->getTarget() << " has been robotomized." << std::endl;
}

std::string RobotmyRequestForm::getTarget(void)const
{
    return this->target;
}

std::ostream & operator<<(std::ostream &o, RobotmyRequestForm &obj)
{
    o << obj.getName() << ", grade " << obj.getGradeToSign() <<  ", exec grade "<< obj.getGradeToExecute() << ", sign " << obj.getIsSigned() << ".\n";
    return (o);
}