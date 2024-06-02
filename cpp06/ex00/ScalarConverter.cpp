#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    // default constructor
}

ScalarConverter::ScalarConverter(ScalarConverter const &src)
{
    *this = src;
    return;
}

ScalarConverter::~ScalarConverter()
{
    return;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &src)
{
    this->_input = src._input;
    return *this;
}

int ScalarConverter::is_digit_str(std::string str)
{
    int len = str.length();
    for(int i = 0; i <= len; i++)
    {
        if(isdigit(str[i]))
            return 0;
    }
    return 1;
}

int ScalarConverter::is_float(std::string str)
{
    int len;
    int i;
    int flag;

    flag = 0;
    len = str.length();
    i = 0;
    while(str[i] == '+' || str[i] == '-')
        i++;
    if(!isdigit(str[0]) && i == 0)
        return 0;
    while(i < (len - 1))
    {
        if(!isdigit(str[i]) && (str[i] != '+' || str[i] != '-'))
        {
            if(str[i] == '.')
                flag++;
            
            else
                return 0;
        }
        if(flag > 1)
            return 0;
        i++;
    }
    if(str[len - 1] != 'f')
        return 0;
    if(flag != 1)
        return 0;
    return 1;
}

int ScalarConverter::is_double(std::string str)
{
    int len;
    int i;
    int flag;

    flag = 0;
    len = str.length();
    i = 0;
    while(str[i] == '+' || str[i] == '-')
        i++;
    if(!isdigit(str[i]) && i == 0)
        return 0;

    while(i < len)
    {
        if(!isdigit(str[i]))
        {
            if(str[i] == '.')
                flag++;
            else
                return 0;
        }
        if(flag > 1)
            return 0;
        i++;
    }
    if(flag != 1)
        return 0;
    return 1;
    
}

int ScalarConverter::is_integer(std::string str)
{
    int i;
    int len;

    i = 0;
    len = str.length();
    while(str[i] == '+' || str[i] == '-')
        i++;
    while(i < len)
    {
        if(!isdigit(str[i]))
            return 0;
        i++;
    }
    return 1;
}

std::string ScalarConverter::WhichType(std::string str) 
{
    if((str.length() == 1) && (!isdigit(str[0])))
        return "char";
    else if((str.length() > 1) && is_digit_str(str))
        return "string";
    else if(is_float(str))
        return "float";
    else if (is_double(str))
        return "double";
    else if(is_integer(str))
        return "integer";
    else
        return "nan";
}


void ScalarConverter::printIntegerWithLimits(std::string str) {
    try {
        int num = std::stoi(str);
        if (num > std::numeric_limits<int>::max() || num < std::numeric_limits<int>::min()) {
            std::cout << "Number is out of int range." << std::endl;
        } else {
            std::cout << "int: " << num << std::endl;
        }
    } catch (std::invalid_argument& e) {
        std::cout << "Invalid argument: " << e.what() << '\n';
    } catch (std::out_of_range& e) {
        std::cout << "Out of range: " << e.what() << '\n';
    }
}

void ScalarConverter::printFloatWithLimits(std::string str, int flag) 
{
    try {
        float num = std::stof(str);
        if (num > std::numeric_limits<float>::max() || num < std::numeric_limits<float>::lowest()) {
            std::cout << "Number is out of float range." << std::endl;
        } 
        else
        {
            if(flag == 1)
                std::cout << "float: " << num << "f" << std::endl;
            else if(flag == 0)
                std::cout << "float: " << num << ".0f" << std::endl;
        }
    } catch (std::invalid_argument& e) {
        std::cout << "Invalid argument: " << e.what() << '\n';
    } catch (std::out_of_range& e) {
        std::cout << "Out of range: " << e.what() << '\n';
    }
}

void ScalarConverter::convert(std::string str)
{

    if(WhichType(str) == "char")
    {
        std::cout << "char: " << str << std::endl;
        std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
        //printIntegerWithLimits(str);
        //printFloatWithLimits(str,0);
        std::cout << "float: " << static_cast<float>(str[0]) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(str[0]) << ".0" << std::endl;
    }
    else if(WhichType(str) == "integer")
    {
        if(static_cast<int>(std::stod(str)) > 32 && static_cast<int>(std::stod(str)) < 126)
            std::cout << "char: '" << static_cast<char>(std::stod(str)) << "'" << std::endl;
        else
            std::cout << "char: " << "Non displayable " << std::endl;
        printIntegerWithLimits(str);
        printFloatWithLimits(str,0);
        std::cout << "double: " << str << ".0" << std::endl;
    }

    else if (WhichType(str) == "float")
    {
        if(static_cast<int>(std::stod(str)) > 32 && static_cast<int>(std::stod(str)) < 126)
            std::cout << "char: " << "'" << static_cast<char>(std::stod(str)) << "'" << std::endl;
        else
            std::cout << "char: '" << "Non displayable " <<  "'" <<std::endl;
        printIntegerWithLimits(str);
        std::cout << "float: " << str << std::endl;
        std::cout << "double: " << std::stof(str) << "" <<  std::endl;
    }

    else if(WhichType(str) == "double")
    {
        if(static_cast<int>(std::stod(str)) > 32 && static_cast<int>(std::stod(str)) < 126)
            std::cout << "char: '" << static_cast<char>(std::stod(str)) << "'" << std::endl;
        else
            std::cout << "char: " << "Non displayable " << std::endl;
        printIntegerWithLimits(str);
        printFloatWithLimits(str,1);

        std::cout << "double: " << str << std::endl;
    }
    else if(WhichType(str) == "string")
    {
        std::cout << "char: " << "impossible" << std::endl;
        std::cout << "int: " << "impossible" << std::endl;
        std::cout << "float: " << "nanf" << std::endl;
        std::cout << "double: " << "nan" << std::endl;
    }
    else
        std::cout << "Error" << std::endl;
}