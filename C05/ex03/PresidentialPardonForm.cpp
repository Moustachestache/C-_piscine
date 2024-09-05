# include "main.hpp"

/* PresidentialPardonForm: Required grades: sign 25, exec 5
Informs that <target> has been pardoned by Zaphod Beeblebrox */

PresidentialPardonForm::PresidentialPardonForm() : 
    AForm("PresidentialPardonForm", 25, 5), _target("Jeremy Random")
{
    std::cout << "DefaultPresidentialPardonForm " << this << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : 
    AForm("NamedPresidentialPardonForm", 145, 137), _target(target)
{
    std::cout << "NamedPresidentialPardonForm " << this << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Pulverizing Presidential Pardon " << this << std::endl;
}

void    PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    if (executor.getGrade() > getExecGrade())
        throw ExecPermissionTooLowException();
    if (getIsSigned() == false)
        throw FormNotSignedException();
    std::cout << _target << " was pardonned by Zaphod Beeblebrox" << std::endl;
}