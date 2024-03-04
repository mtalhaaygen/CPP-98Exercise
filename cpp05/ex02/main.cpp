/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 10:30:36 by tblaase           #+#    #+#             */
/*   Updated: 2024/03/06 16:28:20 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	{
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		Bureaucrat *a = new Bureaucrat();
		AForm *b = new PresidentialPardonForm("default");
		// AForm *c = new RobotomyRequestForm();
		// AForm *d = new ShrubberyCreationForm();
		std::cout << std::endl;

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		std::cout << a->getName() << std::endl;
		std::cout << b->getName() << std::endl;
		// std::cout << "c" << c << std::endl;
		// std::cout << "d" << d << std::endl;
		try
		{
			b->beSigned(*a);
			b->execute(*a);
		}
		catch(AForm::GradeTooLowException &e)
		{
			std::cout << "\033[33m" << a->getName() << " was not able to sign " << b->getName() << ": " << e.what() << "\033[0m" << std::endl;
		}

		std::cout << b << "\n";
		std::cout << std::endl;

		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
		delete a;
		delete b;
		std::cout << std::endl;
	}
	 std::cout << "--------------------------------------------------------------------------------------------------------------" << std::endl;
	{
		std::cout << std::endl;

		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		Bureaucrat *a = new Bureaucrat(145, "Assistant");
		Bureaucrat *b = new Bureaucrat(1, "CEO");
		AForm *c = new PresidentialPardonForm("some dude");
	// 	// Form *d = new Form(*c);
	// 	// Form *d = new Form("Rent Contract", 140, 100); // you are not able to construct an abstract class here
		std::cout << std::endl;

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		std::cout << a;
		std::cout << b;
		std::cout << c;
		std::cout << std::endl;

	// 	// Try to execute before signing
		try
		{
			c->execute(*b);
		}
		catch (AForm::FormNotSigned &e)
		{
			std::cerr << "\033[33m" << a->getName() << " was not able to execute the Form " << c->getName() << ": " << e.what() << "\033[0m" << std::endl;
		}
		std::cout << std::endl;
	// 	// Assistant signs the Form
		try
		{
			c->beSigned(*a);
	// 		// a->signForm(*c);
		}
		catch(Bureaucrat::GradeTooLowException &e)
		{
			std::cerr << "\033[33m" << a->getName() << " was not able to sign the Form " << c->getName() << ": " << e.what() << "\033[0m" << std::endl;
		}

	// 	// CEO signs the Form
		std::cout << std::endl;
		std::cout << c;
		std::cout << std::endl;
		try
		{
			c->beSigned(*b);
	// 		// b->signForm(*c);
		}
	// 	// catch(Form::GradeTooLowException &e)
		catch(Bureaucrat::GradeTooLowException &e)
		{
			std::cerr << "\033[33m" << b->getName() << " was not able to sign the Form " << c->getName() << ": " << e.what() << "\033[0m" << std::endl;
		}
		std::cout << std::endl;
		std::cout << c;
		std::cout << std::endl;

	// 	// try signing the from again
		std::cout << std::endl;
		b->signForm(*c);
		std::cout << std::endl;

	// 	// execute the Form from assistant
		try
		{
			c->execute(*a);
	// 		// a.executeForm(*c);
		}
		catch(Bureaucrat::GradeTooLowException &e)
		{
			std::cerr << "\033[33m" << a->getName() << " was not able to execute the Form " << c->getName() << ": " << e.what() << "\033[0m" << std::endl;
		}
		std::cout << std::endl;

	// 	// execute Form from CEO
		try
		{
			c->execute(*b);
	// 		// b.executeForm(*c);
		}
		catch(Bureaucrat::GradeTooLowException &e)
		{
			std::cerr << "\033[33m" << b->getName() << " was not able to execute the Form " << c->getName() << ": " << e.what() << "\033[0m" << std::endl;
		}
		std::cout << std::endl;

		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
		delete a;
		delete b;
		delete c;
		std::cout << std::endl;
	}
	std::cout << "--------------------------------------------------------------------------------------------------------------" << std::endl;
	{
		std::cout << std::endl;

		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		Bureaucrat *a = new Bureaucrat(1, "Emperor");
		PresidentialPardonForm *b = new PresidentialPardonForm("this other dude");
		PresidentialPardonForm *c = new PresidentialPardonForm(*b);
		std::cout << std::endl;

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		std::cout << a;
		std::cout << b;
		std::cout << c;
		b->beSigned(*a);
		a->signForm(*c);
		b->execute(*a);
		a->executeForm(*c);
	// 	// c->execute(*a);
		std::cout << std::endl;

		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
		delete a;
		delete b;
		delete c;
		std::cout << std::endl;
	}
	std::cout << "--------------------------------------------------------------------------------------------------------------" << std::endl;
	{
		std::cout << std::endl;

		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		Bureaucrat *a = new Bureaucrat(1, "Emperor");
		RobotomyRequestForm *b = new RobotomyRequestForm("Bender");
		ShrubberyCreationForm *c = new ShrubberyCreationForm("christmas");
		std::cout << std::endl;

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		std::cout << a;
		std::cout << b;
		std::cout << c;
		b->beSigned(*a);
		a->signForm(*c);
		for (int i= 0; i < 10; i++)
			b->execute(*a);
	// 	// a->executeForm(*c);
		c->execute(*a);
		std::cout << std::endl;

		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
		delete a;
		delete b;
		delete c;
		std::cout << std::endl;
	}
	return (0);
}