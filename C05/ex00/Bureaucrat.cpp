# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Jean Default"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name) : _name(name), _grade(150)
{
}

Bureaucrat::Bureaucrat(int level) : _name("Jean Nivault")
{
    if (level > 150)
        throw GradeTooLowException();
    if (level < 1)
        throw GradeTooHighException();
    _grade = level;
}

Bureaucrat::Bureaucrat(Bureaucrat &src) : _name(src.getName())
{
    _grade = src.getGrade();
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &src)
{
    if (&src != this)
    {
        _grade = src.getGrade();
    }
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "recycling bureaucrat " + getName();
}

Bureaucrat &Bureaucrat::operator<<(Bureaucrat &src)
{
    (void) src;
    return *this;
}

const std::string     Bureaucrat::getName( void ) const
{
    return _name;
}

int     Bureaucrat::getGrade( void )
{
    return  _grade;
}

void    Bureaucrat::promote(unsigned char val)
{
    if (_grade - val < 1)
        throw GradeTooHighException();
    else
        _grade -= val;
}

void    Bureaucrat::demote(unsigned char val)
{
    if (_grade + val < 1)
        throw GradeTooLowException();
    else
        _grade += val;
}

const char *Bureaucrat::GradeTooHighException::what( void ) const throw()
{
    return ("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what( void ) const throw()
{
    return ("Grade too low");
}
