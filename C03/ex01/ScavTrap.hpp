/*Because you can never have enough ScavTraps, you will now create a derived robot.
It will be named ScavTrap and will inherit the constructors and destructor from ScavTrap. However, its constructors, destructor and attack() will print different messages.
After all, ScavTraps are aware of their individuality.
Note that proper construction/destruction chaining must be shown in your tests.
When a ScavTrap is created, the program starts by building a ScavTrap. Destruction is
in reverse order. Why?
ScavTrap will use the attributes of ScavTrap (update ScavTrap in consequence) and
must initialize them to:

• Name, which is passed as parameter to a constructor

• Hit points (100), represent the health of the ScavTrap

• Energy points (50)

• Attack damage (20)

ScavTrap will also have its own special capacity:
void guardGate();
This member function will display a message informing that ScavTrap is now in Gate
keeper mode.
Don’t forget to add more tests to your program*/
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public ClapTrap {
    public:
        ScavTrap();
        ScavTrap( std::string name );
        ScavTrap( const ScavTrap &src );
        ~ScavTrap();
        ScavTrap &operator= ( const ScavTrap &src );
        void guardGate();
};
std::ostream    &operator<<(std::ostream &stream, const ClapTrap &obj);
#endif