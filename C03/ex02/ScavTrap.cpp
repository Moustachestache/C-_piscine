#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

/*Name, which is passed as parameter to a constructor
• Hit points (100), represent the health of the ClapTrap
• Energy points (50)
• Attack damage (20)*/

// pas bien: ScavTrap::ScavTrap () : _hp(100), _ap(50), _ad(20), _name("default ScavTrap")
ScavTrap::ScavTrap ()
{
    std::cout << "ScavTrap default constructor called." << std::endl;
    _hp = 100;
    _ap = 50;
    _ad = 20;
    _name = "Default ScavTrap";
}

ScavTrap::ScavTrap ( std::string name )
{
    std::cout << "ScavTrap string constructor called." << std::endl;
    _hp = 100;
    _ap = 50;
    _ad = 20;
    _name = name;
}

ScavTrap  &ScavTrap::operator=(const ScavTrap &src)
{
    std::cout << "ScavTrap copy assignment constructor called." << std::endl;
    if (this != &src)
    {
        this->_hp = src.getHp();
        this->_ap = src.getAp();
        this->_ad = src.getAd();
        this->_name = src.getName();
    }
    return *this;
}

ScavTrap::~ScavTrap ()
{
    std::cout << "ScavTrap destructor called." << std::endl;
    //this->ClapTrap::~ClapTrap();
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap Uses Guard Gate. ";
    if (this->getAp() <= 0)
        std::cout << "It's not very effective.";
    else
    {
        std::cout << this->getName() << " is now in Gatekeeper mode.";
        this->_ap--;
    }
    std::cout << std::endl;
}

//  hehe
std::ostream &operator<<( std::ostream &stream, const ScavTrap &obj)
{
    stream << obj.getName() << " - hp="<< obj.getHp() << " ad=" << obj.getAd() << " ap=" << obj.getAp();
    return (stream);
}