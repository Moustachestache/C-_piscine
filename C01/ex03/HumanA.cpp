/*Now, create two classes: HumanA and HumanB. They both have a Weapon and a
name. They also have a member function attack() that displays (of course, without the
angle brackets):
<name> attacks with their <weapon type>
HumanA and HumanB are almost the same except for these two tiny details:
• While HumanA takes the Weapon in its constructor, HumanB doesn’t.
• HumanB may not always have a Weapon, whereas HumanA will always be armed.*/

#include "main.class.hpp"
//  HumanA::HumanA( std::string name, Weapon &weapon ) : _weapon(weapon)
HumanA::HumanA( std::string name, Weapon &weapon ) : _weapon(weapon)
{
    this->_name = name;
    this->_weapon = weapon;
}

HumanA::~HumanA( void )
{
}

void HumanA::attack( void )
{
    std::cout << this->_name << " attacks with " << this->_weapon.getType() << std::endl;
}