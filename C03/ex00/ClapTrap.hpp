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
        int             getAp( void ) const;
        int             getHp( void ) const;
        int             getAd( void ) const;
        std::string     getName( void ) const;
    private:
        int         _hp;
        int         _ap;
        int         _ad;
        std::string _name;
};
std::ostream &operator<<( std::ostream &stream, const ClapTrap &obj);
#endif