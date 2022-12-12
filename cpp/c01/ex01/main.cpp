#include "zombie.hpp"

int main()
{
    int nbr = 2;
    std::string nameZombie = "FOO";
    Zombie *zom;

    zom = zombieHorde(nbr, nameZombie);
    delete [] zom;
    return (0);
}
