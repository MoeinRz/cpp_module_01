#include "../include/HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->setName(name);
    return ;
}

HumanB::~HumanB(void)
{
    return ;
}

void HumanB::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    return ;
}

void HumanB::setName(std::string name)
{
    this->_name = name;
    return ;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
    return ;
}
