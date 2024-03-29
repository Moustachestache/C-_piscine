#include <iostream>
#ifndef HARL_CLASS_CPP
# define HARL_CLASS_CPP

# include "main.class.hpp"

class Harl
{
    public:
        Harl( void );
        ~Harl( void );
        void    complain( std::string level );
    private:
        void    debug( void );
        void    info( void );
        void    warning( void );
        void    error( void );
};

#endif