# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Jean Default"), _grade(150)
{
    std::cout << "Birthing [default] Bureaucrat: " << _name << " grade " << _grade << std::endl;
}

Bureaucrat::Bureaucrat(std::string name) : _name(name), _grade(150)
{
    std::cout << "Birthing [string] Bureaucrat: " << _name << " grade " << _grade << std::endl;
}

Bureaucrat::Bureaucrat(int level) : _name("Jean Nivault")
{
    if (level > 150)
        throw GradeTooLowException();
    if (level < 1)
        throw GradeTooHighException();
    _grade = level;
    std::cout << "Birthing [level] Bureaucrat: " << _name << " grade " << _grade << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &src) : _name(src.getName())
{
    _grade = src.getGrade();
    std::cout << "Birthing [assignment] Bureaucrat: " << _name << " grade " << _grade << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &src)
{
    if (&src != this)
    {
        _grade = src.getGrade();
    }
    std::cout << "Birthing [assignment operator] Bureaucrat: " << _name << " grade " << _grade << std::endl;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "recycling bureaucrat " + getName() << std::endl;
}

std::ostream &operator<<( std::ostream &stream, const Bureaucrat &obj)
{
    stream << "[info] " << obj.getName() << " is grade " << obj.getGrade() << ".";
    return (stream);
}

const std::string     Bureaucrat::getName( void ) const
{
    return _name;
}

int     Bureaucrat::getGrade( void ) const
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
    if (_grade + val > 150)
        throw GradeTooLowException();
    else
        _grade += val;
}

const char *Bureaucrat::GradeTooHighException::what( void ) const throw()
{
    return ("Error: Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what( void ) const throw()
{
    return ("Error: Grade too low");
}
