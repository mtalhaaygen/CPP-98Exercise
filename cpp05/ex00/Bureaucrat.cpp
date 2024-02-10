#include "Bureaucrat.hpp"
// Geçersiz bir not kullanarak bir Bürokrat'ı örneklendirmeye yönelik herhangi bir girişim bir exception oluşturmalıdır:

Bureaucrat::Bureaucrat ()
{

}



Bureaucrat::Bureaucrat (const Bureaucrat &a)
{

}

Bureaucrat::~Bureaucrat ()
{

}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &a)
{

}

const std::string Bureaucrat::getName()
{
	return (this->name);
}

unsigned int Bureaucrat::getGrade()
{
	return (this->grade);
}

//  gerektiginde exception fırlat
void Bureaucrat::incrementGrade()
{
	if (this->grade < 150)
		this->grade++;
}
//  gerektiginde exception fırlat
void Bureaucrat::decrementGrade()
{
	if (this->grade > 1)
		this->grade--;
}
std::ostream & operator<<(std::ostream &o, Bureaucrat const &obj) {

	o << obj.getGrade();
	// << ", bureaucrat grade";
	// o << obj.getGrade();
	return (o);
}