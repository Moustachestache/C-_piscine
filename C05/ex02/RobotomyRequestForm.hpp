# include "main.hpp"

/* RobotomyRequestForm: Required grades: sign 72, exec 45
Makes some drilling noises. Then, informs that <target> has been robotomized
successfully 50% of the time. Otherwise, informs that the robotomy failed. */


class RobotomyRequestForm : public AForm
{
    public:
        RobotomyRequestForm();
		RobotomyRequestForm(const std::string name);
        ~RobotomyRequestForm();
        
        //  etc
        void    execute(const Bureaucrat &executor) const;

    private:
        const std::string   _target;
};