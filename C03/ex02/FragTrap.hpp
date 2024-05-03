/*Making ClapTraps is probably starting to get on your nerves.

Now, implement a FragTrap class that inherits from ClapTrap. It is very similar to
ScavTrap. 

However, its construction and destruction messages must be different. 

Proper
construction/destruction chaining must be shown in your tests. When a FragTrap is
created, the program starts by building a ClapTrap. Destruction is in reverse order.
Same things for the attributes, but with different values this time:


• Name, which is passed as parameter to a constructor
• Hit points (100), represent the health of the ClapTrap
• Energy points (100)
• Attack damage (30)


FragTrap has a special capacity too:
void highFivesGuys(void);
This member function displays a positive high fives request on the standard output.
Again, add more tests to your program.*/
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public ClapTrap {
    public:
        FragTrap();
        FragTrap( std::string name );
        FragTrap( const FragTrap &src );
        ~FragTrap();
        FragTrap &operator= ( const FragTrap &src );
        void highFivesGuy( void );
};
#endif