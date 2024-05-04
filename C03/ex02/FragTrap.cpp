#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap()    : ClapTrap("default FragTrap")
{
    std::cout << "Creating default Fragtrap" << std::endl;
    _hp = 100;
    _ap = 100;
    _ad = 30;
}

FragTrap::FragTrap( std::string name )  : ClapTrap(name)
{
    std::cout << "Creating Fragtrap from str" << std::endl;
    _hp = 100;
    _ap = 50;
    _ad = 20;
}

FragTrap::~FragTrap()
{
    std::cout << "fragtrap " << this->_name << " destroyed" << std::endl;
}

void FragTrap::highFivesGuy( void )
{
    std::cout << this->getName() << " requests a high five";
    if (this->getAp() <= 0)
        std::cout << " but is left hanging :(";
    else
    {
        std::cout << "✋" << std::endl;
    }
    std::cout << std::endl;
}