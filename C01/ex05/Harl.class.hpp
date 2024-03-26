#ifndef HARL_CPP
# define HARL_CPP

#include "main.class.hpp"

class Harl
{
    public:
        void    complain( std::string level );
    private:
        typedef void(Harl::*func_array)();
        void    debug( void );
        void    info( void );
        void    warning( void );
        void    error( void );
};

#endif