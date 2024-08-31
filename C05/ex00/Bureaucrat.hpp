#pragma once
#include <iostream> 
#include <string>
#include <exception>

class Bureaucrat {
    public:
        //  default
        Bureaucrat();
        Bureaucrat(int level);
        Bureaucrat(std::string name);
        Bureaucrat(Bureaucrat &src);
        Bureaucrat &operator=(Bureaucrat &src);
        ~Bureaucrat();

        //  overload
        Bureaucrat &operator<<(Bureaucrat &src);

        //  getters
        const std::string getName( void );
        int getGrade( void );

        //  functions
        void    promote(unsigned char val);
        void    demote(unsigned char val);

        //  exceptions
        class   GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what( void ) const throw();
        };

        class   GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what( void ) const throw();
        };

    protected:
        const std::string   _name;
        int                 _grade;
};