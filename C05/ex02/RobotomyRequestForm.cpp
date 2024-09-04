# include "main.hpp"

/* RobotomyRequestForm: Required grades: sign 72, exec 45
Makes some drilling noises. Then, informs that <target> has been robotomized
successfully 50% of the time. Otherwise, informs that the robotomy failed. */

RobotomyRequestForm::RobotomyRequestForm() : 
    AForm("RobotomyRequestForm", 25, 5), _target("Jeremy Random")
{
    std::cout << "DefaultRobotomyRequestForm " << this << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : 
    AForm("NamedRobotomyRequestForm", 145, 137), _target(target)
{
    std::cout << "NamedRobotomyRequestForm " << this << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Removing Robotomy Request " << this << std::endl;
}

void    RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    if (executor.getGrade() > getExecGrade())
        throw ExecPermissionTooLowException();
    std::cout << "Bzzt Brrt ";
    if (std::rand() % 2 == 1)
        std::cout << _target << " has been successfully robotomized" << std::endl;
    else
        std::cout << _target << " has died on the operating table" << std::endl;
}