#include "main.class.hpp"

class HumanB
{
    public:
        HumanB( std::string name );
        ~HumanB( void );
        void attack( void );
        void setWeapon(Weapon &Weapon);
        std::string name;
        Weapon weapon;
};