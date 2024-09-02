# pragma once
# include "main.hpp"

class Form {
    public:
        //  default
        Form();
        Form(const Form &obj);
        Form &operator=(const Form &src);
        ~Form();

        //  extra constructors
        Form(int signGrade, int execGrade);

        //  getters
        std::string     getName( void ) const;
        int             getSignGrade( void ) const;
        int             getExecGrade( void ) const;
        bool            getIsSigned( void );

        //  members
        void    beSigned(Bureaucrat &signatory);

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

    private:
        const std::string   _name;
        bool                _isSigned;
        const int           _signGrade;
        const int           _execGrade;
};
std::ostream &operator<<(std::ostream &stream, Form &obj);