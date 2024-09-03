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

			shrub.beSigned(georgiy);
			shrub.execute(georgiy);

			drill.beSigned(georgiy);
			drill.execute(georgiy);

			criminal.beSigned(georgiy);
			criminal.execute(georgiy);

            //  errors
            shrub.beSigned(herbert);
			shrub.execute(herbert);

			drill.beSigned(herbert);
			drill.execute(herbert);

			criminal.beSigned(herbert);
			criminal.execute(herbert);

        }
    catch (std::exception & e)
        {
		    std::cerr << e.what() << std::endl;
        }
}