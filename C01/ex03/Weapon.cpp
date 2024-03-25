#include "main.class.hpp"

/*Implement a Weapon class that has:
• A private attribute type, which is a string.
• A getType() member function that returns a const reference to type.
• A setType() member function that sets type using the new one passed as parameter.*/

Weapon::Weapon( void )
{
    this->_weaponName = "fists";
}

Weapon::Weapon( std::string str)
{
    this->_weaponName = str;
}

Weapon::~Weapon( void )
{

}

std::string const &Weapon::getType( void )
{
    return (this->_weaponName);
}

void    Weapon::setType( std::string newType )
{
    this->_weaponName = newType;
}