#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm(145, 137, false, "ShrubberyCreationForm"), target("default")
{
    std::cout << "ShrubberyCreationForm Default Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : AForm(145, 137, false, "ShrubberyCreationForm"), target(target)
{
    std::cout << "ShrubberyCreationForm Constructor for target " << this->getTarget() << " called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : AForm(other), target(other.target)
{
    std::cout << "ShrubberyCreationForm Copy Constructor called" << other.getName() <<
    " into " << this->getName() << std::endl;
    *this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm Deconstructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    std::cout << "ShrubberyCreationForm Assignation operator called" << std::endl;
    if (this != &other)
        this->target = other.target;
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    else if (!this->getIsSigned())
        throw AForm::FormNotSigned();
    std::ofstream file;
    std::string filename = this->getTarget() + "_shrubbery";
    file.open(filename.c_str());
    file << "\n          &&& &&  & &&\n      & &\\/&\\|& ()|/ @, &&\n      &\\/(/&/&||/& /_/)_&/_&&\n   &() &\\/&|()|/&\\/ @% & ()& &\n  &_\\_&&_\\ |& |&&/&__%_/_&&\n&&   &&@& &| &| /& & % ()& /&&\n  &_---(@)&\\&\\|&&-&&--%---()~&\n      && &  \\ \\/ /  &&&&\n              ||/ /\n              ||||\n              ||||\n              ||||\n ,_-=-~.-^-_- |||| ,_ -=-~.-^- _-";
    file.close();
    std::cout << "Shrubbery has been created in " << this->getTarget() << "_shrubbery" << std::endl;
}

std::string ShrubberyCreationForm::getTarget(void)const
{
    return this->target;
}

std::ostream & operator<<(std::ostream &o, ShrubberyCreationForm &obj)
{
    o << obj.getName() << ", grade " << obj.getGradeToSign() <<  ", exec grade "<< obj.getGradeToExecute() << ", sign " << obj.getIsSigned() << ".\n";
    return (o);
}