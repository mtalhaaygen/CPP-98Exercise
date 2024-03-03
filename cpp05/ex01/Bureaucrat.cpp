#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat (): name("default"), grade(150)
{
	// std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat (int grade, std::string name) : name(name), grade(grade)
{
	// std::cout << "Bureaucrat constructor called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat (const Bureaucrat &a)
{
	// std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = a;
}

Bureaucrat::~Bureaucrat ()
{
	// std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator= (const Bureaucrat &other)
{
	// std::cout << "Bureaucrat assignation operator called" << std::endl;
	if (this != &other)
	{
		// this->name = other.name;
		this->grade = other.grade;
	}
	return (*this);
}

const std::string Bureaucrat::getName(void)const
{
	return (this->name);
}

 int Bureaucrat::getGrade(void)const
{
	return (this->grade);
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

void Bureaucrat::incrementGrade()
{
	if (this->grade > 1)
		this->grade--;
	else
	{
		throw Bureaucrat::GradeTooHighException();
	}
}

void Bureaucrat::decrementGrade()
{
	if (this->grade < 150)
		this->grade++;
	else
	{
		Bureaucrat::GradeTooLowException x;
		throw x;
	}
}

void Bureaucrat::signForm(Form &form)
{
	if (form.getIsSigned())
		std::cout << this->name << " couldn’t sign " << form.getName() << " because it is already signed"<< std::endl;
	else
	{
		try
		{
			form.beSigned(*this);
			std::cout << this->name << " signed" << form.getName() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << this->name << " couldn’t sign " << form.getName() << " because ";
			std::cerr << e.what() << std::endl;
		}
	}
}

std::ostream & operator<<(std::ostream &o, Bureaucrat const &obj) {

	o << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (o);
}

