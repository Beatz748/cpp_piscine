#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(0x000)
{
	
}

HumanB::HumanB(std::string name, Weapon &weapon) : _name(name), _weapon(&weapon)
{

}

HumanB::~HumanB()
{

}

void			HumanB::attack() const
{
	std::cout << getName() << " attacks with his " << getWeapon()->getType() << std::endl;
}

std::string		HumanB::getName() const
{
	return _name;
}

const Weapon		*HumanB::getWeapon() const
{
	return _weapon;
}

void			HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

