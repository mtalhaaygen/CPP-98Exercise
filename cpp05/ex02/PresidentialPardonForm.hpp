#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

// classes
class Bureaucrat;
class From;

class PresidentialPardonForm : public AForm
{
	private:
		std::string target;
	public:
	// constructors
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& other);
	// destructor
		~PresidentialPardonForm();
	// operator overloads
		PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
	// execute
		void execute(Bureaucrat const & executor) const;
	// getter
		std::string getTarget(void)const;
};

std::ostream & operator<<(std::ostream &o, PresidentialPardonForm &obj); // bunu Aform dan miras alamıyor mu da burada tekrar tanımlıyoruz?

#endif