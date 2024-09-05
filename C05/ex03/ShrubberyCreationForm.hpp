# pragma once
# include "main.hpp"

class ShrubberyCreationForm : public AForm
{
    public:
        ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string name);
        ~ShrubberyCreationForm();
        
        //  etc
        void    execute(const Bureaucrat &executor) const;

    private:
        const std::string   _target;
};