#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap    a("ClapTrap lvl 3");
    ScavTrap    b("Skav Trap but with a name");

    for (int round = 0; a.getHp() > 0 && b.getHp() > 0; round++)
    {
        std::cout << "//    ROUND " << round << "   //" << std::endl;
        a.attack(b.getName());
        b.takeDamage(a.getAd());
        a.beRepaired(2);

        b.guardGate();
        b.attack(a.getName());
        a.takeDamage(b.getAd());
        b.beRepaired(2);
    }
    std::cout << "End of match. Results:" << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
}