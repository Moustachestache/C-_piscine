# pragma once
# include "main.hpp"

class AForm {
    public:
        //  default
        AForm();
        AForm(const AForm &obj);
        AForm &operator=(const AForm &src);
        virtual ~AForm() = 0;

        //  extra constructors
        AForm(int signGrade, int execGrade);
        AForm(std::string name, int signGrade, int execGrade);

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

        class   ExecPermissionTooLowException : public std::exception
        {
            public:
                virtual const char* what( void ) const throw();
        };
        
        //  ex 02
        virtual void    execute(const Bureaucrat &executor) const = 0;

    private:
        const std::string   _name;
        bool                _isSigned;
        const int           _signGrade;
        const int           _execGrade;
};
std::ostream &operator<<(std::ostream &stream, AForm &obj);