#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat a(1, "buro");
		std::cout << a << std::endl;

		Form form(1, 11, false, "form");
		a.signForm(form);


		Form form2(23, 11, false, "form");
		a.signForm(form2);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}