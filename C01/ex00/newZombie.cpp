#include "Zombie.hpp"

Zombie *newZombie( std::string name )
{
    Zombie  *retval;

    retval = new Zombie(name);
    return (retval);
}
