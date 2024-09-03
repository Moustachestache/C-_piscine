# include "main.hpp"

AForm::AForm() : 
    _name("default AForm"), 
    _isSigned(0),
    _signGrade(150),
    _execGrade(150)
{
    std::cout << "Creating [default] AForm (0x" << this << ")" << std::endl;
}

AForm::AForm(int signGrade, int execGrade) : 
    _name("custom AForm"), 
    _isSigned(0),
    _signGrade(signGrade), 
    _execGrade(execGrade)
{
    if (signGrade > 150 || execGrade > 150)
    {
        throw AForm::GradeTooLowException();
    }
    if (signGrade < 1 || execGrade < 1)
    {
        throw AForm::GradeTooHighException();
    }
    std::cout << "Creating [custom] AForm (0x" << this << ")" << std::endl;
}

AForm::AForm(std::string name, int signGrade, int execGrade) :
    _name(name), 
    _isSigned(0),
    _signGrade(signGrade), 
    _execGrade(execGrade)
{
    if (signGrade > 150 || execGrade > 150)
    {
        throw AForm::GradeTooLowException();
    }
    if (signGrade < 1 || execGrade < 1)
    {
        throw AForm::GradeTooHighException();
    }
    std::cout << "Creating [custom \"" << getName() << "\"] AForm (0x" << this << ")" << std::endl;
}

AForm::AForm(const AForm &obj) : 
    _name(obj.getName() + "copy AForm"), 
    _isSigned(0),
    _signGrade(obj.getSignGrade()), 
    _execGrade(obj.getExecGrade())
{
    std::cout << "Creating [copy] AForm (0x" << &obj << ")" << std::endl;
}

AForm    &AForm::operator=(const AForm &src)
{
    if (&src != this)
    {
        _isSigned = 0;
    }
    std::cout << "Creating [copy assignment] AForm (0x" << &src << ")" << std::endl;
    return *this;
}

AForm::~AForm()
{
    std::cout << "Shredding documents ... Goodbye AForm \"" << this->getName() << "\""<< std::endl;
}

//  getters
std::string   AForm::getName( void ) const
{
    return _name;
}
int   AForm::getSignGrade( void ) const
{
    return _signGrade;
}
int   AForm::getExecGrade( void ) const
{
    return _execGrade;
}
bool    AForm::getIsSigned( void )
{
    return _isSigned;
}

//  members
void    AForm::beSigned(Bureaucrat &signatory)
{
    //  if levels == sign AForm through burcrt func
    if (signatory.getGrade() <= this->getSignGrade())
    {
        signatory.signForm();
        _isSigned = 1;
    }
    else
        throw AForm::GradeTooHighException();
    //  else error grade too low
}

std::ostream &operator<<(std::ostream &stream, AForm &obj)
{
    stream << "[info] AForm: " << obj.getName() << " sign lvl: " << obj.getSignGrade() << " exec lvl: " << obj.getExecGrade() << "." << std::endl;
    if (obj.getIsSigned() == true)
        stream << "[status] signed.";
    else
        stream << "[status] unsigned.";
    return stream;
}

const char *AForm::GradeTooHighException::what( void ) const throw()
{
    return ("Error: AForm: Grade too high\r\n");
}

const char *AForm::GradeTooLowException::what( void ) const throw()
{
    return ("Error: AForm: Grade too low\r\n");
}

const char *AForm::ExecPermissionTooLowException::what( void ) const throw()
{
    return ("Error: Bureaucrat Executive level Too Low\r\n");
}


void    AForm::execute(const Bureaucrat &executor)
{
    if (getIsSigned() == 0 || 
        executor.getGrade() > getSignGrade() ||
        executor.getGrade() > getExecGrade())
            throw ExecPermissionTooLowException();
    formExecution();
}

void    AForm::formExecution()
{
    std::cout << "hmm, this is awkward ..." << std::endl;
}