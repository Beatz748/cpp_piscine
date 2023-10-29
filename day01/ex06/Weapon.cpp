#include "Weapon.hpp"

const std::string	&Weapon::getType() const
{
	return _type;
}

void			Weapon::setType(std::string type)
{
	_type = type;
}
Weapon::~Weapon()
{
}

Weapon::Weapon()
{
	setType("Unknown");
}
Weapon::Weapon(std::string type)
{
	setType(type);
}
