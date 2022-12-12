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
        Zombie(std::string name);
        ~Zombie(void);
        void    announce(void);
        //std::string getname(void) const;
        //void    setname(std::string name);
};

void    randomChump(std::string name);
Zombie  *newZombie(std::string name);

#endif
