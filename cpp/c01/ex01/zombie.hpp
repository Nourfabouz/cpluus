#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <iomanip>
#include <string>

class Zombie
{
    private:
        std::string _name;

    public:
        Zombie(void);
        ~Zombie(void);
        void    announce(void);
        std::string getname(void) const;
        void    setname(std::string name);
};

Zombie  *zombieHorde(int N, std::string name);

#endif
