#include "ClapTrap.hpp"

//  constructors & copy constructors
ClapTrap::ClapTrap () : _hp(10), _ap(10), _ad(0), _name("default ClapTrap")
{
    std::cout << "default constructor called." << std::endl;
}

ClapTrap::ClapTrap ( std::string name ) : _hp(10), _ap(10), _ad(0), _name(name)
{
    std::cout << "string constructor called." << std::endl;
}

ClapTrap::ClapTrap (const ClapTrap &src)
{
    std::cout << "copy constructor called." << std::endl;
    this->_hp = src.getHp();
    this->_ap = src.getAp();
    this->_ad = src.getAd();
    this->_name = src.getName();
}

ClapTrap  &ClapTrap::operator=(const ClapTrap &src)
{
    std::cout << "copy assignment constructor called." << std::endl;
    if (this != &src)
    {
        this->_hp = src.getHp();
        this->_ap = src.getAp();
        this->_ad = src.getAd();
        this->_name = src.getName();
    }
    return *this;
}

ClapTrap::~ClapTrap ()
{
    std::cout << "destructor called for " << this->getName() << std::endl;
}

//  getters
int ClapTrap::getAp( void )
{
    return this->_ap;
}

int ClapTrap::getHp( void )
{
    return this->_hp;
}

int ClapTrap::getAd( void )
{
    return this->_ad;
}

std::string ClapTrap::getName( void )
{
    return this->_name;
}


/*
Add the following public member functions so the ClapTrap looks more realistic:

• void attack(const std::string& target);

• void takeDamage(unsigned int amount);

• void beRepaired(unsigned int amount);

When ClapTrack attacks, it causes its target to lose <attack damage> hit points.

When ClapTrap repairs itself, it gets <amount> hit points back. 

Attacking and repairing cost 1 energy point each. 
Of course, ClapTrap can’t do anything if it has no hit points
or energy points left.

In all of these member functions, you have to print a message to describe what happens. For example, the attack() function may display something like (of course, without
the angle brackets):

ClapTrap <name> attacks <target>, causing <damage> points of damage!

The constructors and destructor must also display a message, so your peer-evaluators
can easily see they have been called.

Implement and turn in your own tests to ensure your code works as expected.*/

void    ClapTrap::attack( const std::string& target )
{
    std::cout << this->_name << " attacks " << target;
}

void    ClapTrap::takeDamage( unsigned int amount )
{
    std::cout << this->getName() << " took " << amount << " damage" << std::endl;
    this->_hp -= amount;
}

void    ClapTrap::beRepaired( unsigned int amount )
{
    std::cout << this->getName() << " heals himself";
    if (this->getAp() <= 0)
        std::cout << " but can't.";
    else
    {
        this->_hp += amount;
        std::cout << " for " << amount << " hp";
    }
    std::cout << std::endl;

}
