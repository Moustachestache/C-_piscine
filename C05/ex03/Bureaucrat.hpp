# pragma once
# include "main.hpp"

class Bureaucrat {
    public:
        //  default
        Bureaucrat();
        Bureaucrat(int level);
        Bureaucrat(std::string name);
        Bureaucrat(std::string name, int level);
        Bureaucrat(Bureaucrat &src);
        Bureaucrat &operator=(Bureaucrat &src);
        ~Bureaucrat();

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

        //  ex02
        void    executeForm(AForm const & form) const;

    protected:
        const std::string   _name;
        int                 _grade;
};
std::ostream &operator<<(std::ostream &stream, const Bureaucrat &obj);