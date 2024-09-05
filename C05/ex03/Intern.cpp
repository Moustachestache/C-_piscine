# include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern &obj)
{
    (void) obj;
}

Intern &Intern::operator=(Intern &src)
{
    (void) src;
    return *this;
}

Intern::~Intern()
{

}

int		Intern::getCase(std::string name)
{
	std::string	_functDict[] = {"shrub", "pardon", "robotomy"};

	for (int i = 0; i < 3; i++)
	{
		if (name.compare(_functDict[i].c_str()) == 0)
			return i;
	}
	return -1;
}

AForm	*Intern::makeForm(std::string name, std::string target)
{
	switch (getCase(name))
	{
		case 0:
			return(new ShrubberyCreationForm(target));
		case 1:
			return(new PresidentialPardonForm(target));
		case 2:
			return(new RobotomyRequestForm(target));
	}
	std::cout << "Error: Intern: Requested form does not exist" << std::endl;
	return (NULL);
}