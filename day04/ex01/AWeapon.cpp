#include "AWeapon.hpp"

AWeapon::AWeapon(const AWeapon &rhs)
{
	*this = rhs;
}

AWeapon	&AWeapon::operator=(const AWeapon &rhs)
{
	setName(rhs.getName());
	setAPCost(rhs.getAPCost());
	setDamage(rhs.getDamage());

	return *this;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _damage(damage), _apcost(apcost)
{
	
}

AWeapon::~AWeapon()
{

}

std::string	AWeapon::getName() const
{
	return _name;
}

int	AWeapon::getAPCost() const
{
	return _apcost;
}

int	AWeapon::getDamage() const
{
	return _damage;
}

void	AWeapon::setName(std::string name)
{
	_name = name;
}

void	AWeapon::setAPCost(int apcost)
{
	_apcost = apcost;
}
void	AWeapon::setDamage(int damage)
{
	_damage = damage;
}
