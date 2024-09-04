# include "main.hpp"

int main(void)
{
    try
        {
			Bureaucrat	georgiy("Georgiy", 1);
			Bureaucrat	herbert("Herbert", 150);

			ShrubberyCreationForm       shrub("target");
            RobotomyRequestForm         drill("brain");
            PresidentialPardonForm      criminal("jean");

			georgiy.executeForm(shrub);

			herbert.executeForm(shrub);

        }
    catch (std::exception & e)
        {
		    std::cerr << e.what() << std::endl;
        }
}