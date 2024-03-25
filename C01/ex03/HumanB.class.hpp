#include "main.class.hpp"

class HumanB
{
    public:
        HumanB( std::string name );
        ~HumanB( void );
        void attack( void );
        void setWeapon(Weapon &Weapon);
    private:
        std::string _name;
        Weapon *_weapon;
};