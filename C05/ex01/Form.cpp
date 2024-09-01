# include "Form.hpp"

Form::Form() : 
    _name("default form"), 
    _isSigned(0),
    _signGrade(150),
    _execGrade(150)
{
    std::cout << "Creating [default] form." << std::endl;
}

Form::Form(int signGrade, int execGrade) : 
    _name("custom form"), 
    _isSigned(0),
    _signGrade(signGrade), 
    _execGrade(execGrade)
{
    if (signGrade > 150 || execGrade > 150)
        GradeTooLowException();

    if (signGrade < 1 || execGrade < 1)
        GradeTooHighException();
    std::cout << "Creating [custom] form." << std::endl;
}

Form::Form(const Form &obj) : 
    _name(obj.getName() + "copy form"), 
    _isSigned(0),
    _signGrade(obj.getSignGrade()), 
    _execGrade(obj.getExecGrade())
{
    std::cout << "Creating [copy] form." << std::endl;
}

Form    &Form::operator=(const Form &src)
{
    std::cout << "Creating [copy assignment] form." << std::endl;
}
Form::~Form()
{

}

//  getters
const std::string   Form::getName( void ) const
{

}
const int   Form::getSignGrade( void ) const
{

}
const int   Form::getExecGrade( void ) const
{

}
bool    Form::getIsSigned( void )
{

}

//  members
void    Form::beSigned( const Bureaucrat &signatory)
{

}

std::ostream &operator<<(std::ostream &stream, const Form &obj)
{

}