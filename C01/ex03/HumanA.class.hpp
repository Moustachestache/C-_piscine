#include "main.class.hpp"

class HumanA
{
    public:
        HumanA( std::string name, Weapon weapon );
        ~HumanA( void );
        void attack( void );
        std::string name;
        Weapon weapon;
};