#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{

}

HumanA::~HumanA()
{

}

void			HumanA::attack() const
{
	std::cout << getName() << " attacks with his " << getWeapon().getType() << std::endl;
}

std::string		HumanA::getName() const
{
	return _name;
}

const Weapon		&HumanA::getWeapon() const
{
	return _weapon;
}

