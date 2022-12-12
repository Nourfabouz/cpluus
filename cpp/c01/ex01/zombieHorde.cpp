#include "zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if ( N <= 0) {
        std::cout << "\"" << N << "\": wrong argument";
        return ( NULL );
    }

    Zombie * zom;

    zom = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zom[i].setname(name);
        zom[i].announce();
    }
    return (zom);
}
