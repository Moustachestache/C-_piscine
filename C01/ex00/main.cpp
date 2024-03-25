#include "Zombie.hpp"

int main(void)
{
    Zombie steve("steve");
    Zombie *george = newZombie("george");
    delete george;
    randomChump("Amiral Slip");
}