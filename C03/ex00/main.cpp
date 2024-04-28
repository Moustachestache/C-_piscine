#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    a("Steve");
    ClapTrap    b;

    for (int round = 0; a.getHp() > 0 || b.getHp() > 0; round++)
    {
        std::cout << "//    ROUND " << round << "   //" << std::endl;
        a.attack(b.getName);
        b.takeDamage(a.getAd())
        a.beRepaired(2);

        b.attack(a.getName);
        a.takeDamage(b.getAd())
        b.beRepaired(2);
    }
}