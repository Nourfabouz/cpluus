#include "zombie.hpp"

void    randomChump(std::string name)
{
    Zombie zom(name);
    zom.announce();
}
