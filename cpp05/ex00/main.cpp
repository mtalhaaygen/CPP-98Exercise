#include "Bureaucrat.hpp"
#include "stdio.h"
int main()
{
    Bureaucrat a;
    Bureaucrat b(a);
    Bureaucrat c;
    c = a;

    try
    {
        Bureaucrat d(-1, "d");
    }
    catch (std::exception &e)
    {
    	std::cout << e.what() << std::endl;
    }
    
    try
    {
    	c.decrementGrade();
    }
    catch (std::exception &e)
    {
    	std::cout << e.what() << std::endl;
    }
    return 0;
}