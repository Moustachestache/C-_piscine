/*Now, create two classes: HumanA and HumanB. They both have a Weapon and a
name. They also have a member function attack() that displays (of course, without the
angle brackets):
<name> attacks with their <weapon type>
HumanA and HumanB are almost the same except for these two tiny details:
• While HumanA takes the Weapon in its constructor, HumanB doesn’t.
• HumanB may not always have a Weapon, whereas HumanA will always be armed.*/

#include "main.class.hpp"

HumanB::HumanB( std::string name )
{
    this->_name = name;
}

HumanB::~HumanB( void )
{

}

void HumanB::attack( void )
{
    std::string weapon = "fists";

    if (this->_weapon)
        weapon = this->_weapon->getType();
    std::cout << this->_name << " attacks with " << weapon << std::endl;
}


void HumanB::setWeapon(Weapon &Weapon)
{
    this->_weapon = &Weapon;
}