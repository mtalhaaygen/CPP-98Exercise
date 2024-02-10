#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

// Geçersiz bir not kullanarak bir Bürokrat'ı örneklendirmeye yönelik herhangi bir girişim bir exception oluşturmalıdır:

class Bureaucrat
{
	public:
		const std::string name;
		unsigned int grade;
		Bureaucrat ();
		Bureaucrat (const Bureaucrat &a);
		~Bureaucrat ();
		Bureaucrat &operator = (const Bureaucrat &a);
		const std::string getName();
		unsigned int getGrade();
		void incrementGrade(); // gerektiginde exception fırlat
		void decrementGrade(); // gerektiginde exception fırlat
};

std::ostream & operator<<(std::ostream &o, Bureaucrat const &obj);

#endif