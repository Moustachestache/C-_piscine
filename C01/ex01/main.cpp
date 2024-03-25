#include "Zombie.hpp"

int main(void)
{
    /*Zombie steve("steve");
    Zombie *george = newZombie("george");
    delete george;
    randomChump("Amiral Slip");*/

    // here comes the horde
    int hordeSize = 3;
    Zombie *horde = zombieHorde(hordeSize, "cacounets");
    std::cout << "they live!!" << std::endl;
    delete [] horde;
}