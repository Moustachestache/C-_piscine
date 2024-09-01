#pragma once
#include <iostream> 
#include <ostream>
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

        //  getters
        const std::string getName( void ) const;
        int getGrade( void ) const;

        //  functions
        void    promote(unsigned char val);
        void    demote(unsigned char val);
        void    signForm( void );

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
std::ostream &operator<<(std::ostream &stream, const Bureaucrat &obj);