#ifndef "FORM_HPP"
#define "FORM_HPP"

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string name;
        const int gradeToSign;
        const int gradeToExecute;
        bool isSigned;
    public:
        Form();
        Form(const Form &a);
        Form &operator=(const Form &a);
        ~Form();
        const std::string getName(void)const;
        int getGradeToSign(void)const;
        int getGradeToExecute(void)const;
        bool getIsSigned(void)const;
        void beSigned(Bureaucrat &a);
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
}