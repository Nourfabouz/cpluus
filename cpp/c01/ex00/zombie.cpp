#include "zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
    //this->_name = name;
    std::cout << _name << "constructor has called" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << _name << " destructor called" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

//setters an getters

/*std::string Zombie::getname(void) const
{
    return (this->_name);
}

void    Zombie::setname(std::string name)
{
    this->_name = name
}*/
