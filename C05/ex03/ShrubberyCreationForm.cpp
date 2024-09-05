# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : 
    AForm("DefaultShrubberyCreationForm", 145, 137), _target("default.file")
{
    std::cout << "DefaultShrubberyCreationForm " << this << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : 
    AForm("NamedShrubberyCreationForm", 145, 137), _target(target)
{
    std::cout << "NamedShrubberyCreationForm " << this << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Shredding Shrubs " << this << std::endl;
}

void    ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    if (executor.getGrade() > getExecGrade())
        throw ExecPermissionTooLowException();
    if (getIsSigned() == false)
        throw FormNotSignedException();
    std::ofstream	file;

	file.open(_target.c_str(), std::ofstream::trunc);
    file << "Rhododendron :" << std::endl << std::endl;
    file << "0o0o0O" << std::endl;
    file << "oOO0oO" << std::endl;
    file << "0o0oO0" << std::endl;
    file << "OOoo00" << std::endl;
	file.close();
}