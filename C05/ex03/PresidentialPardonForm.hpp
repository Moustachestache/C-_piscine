# include "main.hpp"

/* PresidentialPardonForm: Required grades: sign 25, exec 5
Informs that <target> has been pardoned by Zaphod Beeblebrox */

class PresidentialPardonForm : public AForm
{
    public:
        PresidentialPardonForm();
		PresidentialPardonForm(const std::string name);
        ~PresidentialPardonForm();
        
        //  etc
        void    execute(const Bureaucrat &executor) const;

    private:
        const std::string   _target;
};