/*


beSigned() member function to the Form that takes a Bureaucrat as parameter. 
It changes the form status to signed 
if the bureaucrat’s grade is high enough (higher or egal to the required one). 

If the grade is too low, throw a Form::GradeTooLowException.

signForm() member function of Bureaucrat. 
If the form got signed, it will print something like:
<bureaucrat> signed <form>
Otherwise, it will print something like:
<bureaucrat> couldn’t sign <form> because <reason>.

Implement and turn in some tests to ensure everything works as expected. */

# pragma once

# include <iostream>
# include <exception>

class Bureaucrat;

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
        const std::string   getName( void ) const;
        const int           getSignGrade( void ) const;
        const int           getExecGrade( void ) const;
        bool                getIsSigned( void );

        //  members
        void    beSigned( const Bureaucrat &signatory);

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
        const int           _signGrade;
        const int           _execGrade;
        bool                _isSigned;
};
std::ostream &operator<<(std::ostream &stream, const Form &obj);