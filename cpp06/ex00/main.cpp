#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    ScalarConverter obj;
    
    if(ac != 2)
        std::cout << "Argument error" << std::endl;
    else
       obj.convert(av[1]);

}