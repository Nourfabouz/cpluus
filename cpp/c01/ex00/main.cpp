#include "zombie.hpp"

int main()
{
    {
        std::cout << "test 1: testing the Zombie class" << std::endl;
        Zombie  z = Zombie( "z" );

        z.announce();
    }
    {
        std::cout << "test 2: testing newZombie Function" << std::endl;
        Zombie* newZ;

        newZ = newZombie( "new z" );
        newZ->announce();
        delete newZ;
    }
    {
        std::cout << "test 3: testing randomChump function" << std::endl;
        randomChump( "random z" );
    }
    {
        std::cout << "test 4: testing two functions together" << std::endl;
        Zombie  z = Zombie( "z" );
        Zombie* newZ;

        newZ = newZombie( "new z" );
        newZ->announce();
        delete newZ;

        randomChump( "random z" );
    }
}
