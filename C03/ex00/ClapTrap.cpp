#include "ClapTrap.hpp"

//  constructors & copy constructors
ClapTrap::ClapTrap () : _hp(10), _ap(10), _ad(3), _name("default ClapTrap")
{
    std::cout << "default constructor called." << std::endl;
}

ClapTrap::ClapTrap ( std::string name ) : _hp(10), _ap(10), _ad(3), _name(name)
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
int ClapTrap::getAp( void ) const
{
    return this->_ap;
}

int ClapTrap::getHp( void ) const
{
    return this->_hp;
}

int ClapTrap::getAd( void ) const
{
    return this->_ad;
}

std::string ClapTrap::getName( void ) const
{
    return this->_name;
}

void    ClapTrap::attack( const std::string& target )
{
    if (this->getHp() <= 0 || this->getAp() <= 0)
        return;
    std::cout << this->_name << " attacks " << target << std::endl;
}

void    ClapTrap::takeDamage( unsigned int amount )
{
    std::cout << this->getName() << " takes " << amount << " damage" << std::endl;
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

std::ostream &operator<<( std::ostream &stream, const ClapTrap &obj)
{
    stream << obj.getName() << " - hp="<< obj.getHp() << " ad=" << obj.getAd() << " ap=" << obj.getAp();
    return (stream);
}