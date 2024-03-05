#include "Intern.hpp"

int main()
{
	try
	{
		Intern	someRandomIntern;
		AForm*	rrf;

		rrf = someRandomIntern.makeForm("RobotomyRequestForm", "HOME");
		Bureaucrat b(147, "test");
		b.signForm(*rrf);
		rrf->execute(b);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	return 0;
}