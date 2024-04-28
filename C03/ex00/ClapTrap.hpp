#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap  {
    public:
        ClapTrap ();
        ClapTrap ( std::string name );
        ClapTrap ( const ClapTrap &src );
        ~ClapTrap ();
        ClapTrap &operator= ( const ClapTrap &src );
        void            attack( const std::string& target );
        void            takeDamage( unsigned int amount );
        void            beRepaired( unsigned int amount );
        int             getAp( void );
        int             getHp( void );
        int             getAd( void );
        std::string     getName( void );
    private:
        int         _hp;
        int         _ap;
        int         _ad;
        std::string _name;
};
#endif