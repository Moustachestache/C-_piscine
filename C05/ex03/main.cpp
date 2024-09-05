# include "main.hpp"

int main(void)
{
    try
        {
			Bureaucrat	georgiy("Georgiy", 1);
			Bureaucrat	herbert("Herbert", 150);

            Intern      kevin;

            AForm       *pardon = kevin.makeForm("pardon", "Barnaby");
            AForm       *pardonUnsigned = kevin.makeForm("pardon", "Bebert");

            pardon->beSigned(georgiy);

			georgiy.executeForm(*pardon);
			georgiy.executeForm(*pardonUnsigned);

        }
    catch (std::exception & e)
        {
		    std::cerr << e.what() << std::endl;
        }
}