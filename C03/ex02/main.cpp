#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ScavTrap    a("ScavTrapN");
    FragTrap    b("FragTrapN");

    for (int round = 0; a.getHp() > 0 && b.getHp() > 0; round++)
    {
        std::cout << "//    ROUND " << round << "   //" << std::endl;
        a.attack(b.getName());
        b.takeDamage(a.getAd());
        a.beRepaired(2);

        b.attack(a.getName());
        a.takeDamage(b.getAd());
        b.highFivesGuy();
    }
    std::cout << "End of match. Results:" << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
}