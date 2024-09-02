# include "main.hpp"

Form::Form() : 
    _name("default form"), 
    _isSigned(0),
    _signGrade(150),
    _execGrade(150)
{
    std::cout << "Creating [default] form (0x" << this << ")" << std::endl;
}

Form::Form(int signGrade, int execGrade) : 
    _name("custom form"), 
    _isSigned(0),
    _signGrade(signGrade), 
    _execGrade(execGrade)
{
    if (signGrade > 150 || execGrade > 150)
    {
        throw Form::GradeTooLowException();
    }
    if (signGrade < 1 || execGrade < 1)
    {
        throw Form::GradeTooHighException();
    }
    std::cout << "Creating [custom] form (0x" << this << ")" << std::endl;
}

Form::Form(const Form &obj) : 
    _name(obj.getName() + "copy form"), 
    _isSigned(0),
    _signGrade(obj.getSignGrade()), 
    _execGrade(obj.getExecGrade())
{
    std::cout << "Creating [copy] form (0x" << &obj << ")" << std::endl;
}

Form    &Form::operator=(const Form &src)
{
    if (&src != this)
    {
        _isSigned = 0;
    }
    std::cout << "Creating [copy assignment] form (0x" << &src << ")" << std::endl;
    return *this;
}

Form::~Form()
{
    std::cout << "Shredding documents ... Goodbye form \"" << this->getName() << "\""<< std::endl;
}

//  getters
std::string   Form::getName( void ) const
{
    return _name;
}
int   Form::getSignGrade( void ) const
{
    return _signGrade;
}
int   Form::getExecGrade( void ) const
{
    return _execGrade;
}
bool    Form::getIsSigned( void )
{
    return _isSigned;
}

//  members
void    Form::beSigned(Bureaucrat &signatory)
{
    if (signatory.getGrade() <= this->getSignGrade())
    {
        signatory.signForm();
        _isSigned = 1;
    }
    else
    {
        throw Form::GradeTooHighException();
    }
}

std::ostream &operator<<(std::ostream &stream, Form &obj)
{
    stream << "[info] Form: " << obj.getName() << " sign lvl: " << obj.getSignGrade() << " exec lvl: " << obj.getExecGrade() << "." << std::endl;
    if (obj.getIsSigned() == true)
        stream << "[status] signed.";
    else
        stream << "[status] unsigned.";
    return stream;
}

const char *Form::GradeTooHighException::what( void ) const throw()
{
    return ("Error: Form: Grade too high\r\n");
}

const char *Form::GradeTooLowException::what( void ) const throw()
{
    return ("Error: Form: Grade too low\r\n");
}