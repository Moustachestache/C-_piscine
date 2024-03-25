#ifndef WEAPON_CLASS_HPP
# define WEAPON_CLASS_HPP

# include "main.class.hpp"

class Weapon
{
    public:
        Weapon( void );
        Weapon( std::string str );
        ~Weapon (void);
        std::string const &getType( void );
        void setType( std::string newType );

    private:
        std::string _weaponName;
};

#endif