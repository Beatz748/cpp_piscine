#include "Character.hpp"
#include "AWeapon.hpp"

Character::~Character()
{

}

Character::Character(std::string const & name) : _name(name), _ap(40), _curWeapon(0x000)
{
	
}
void	Character::recoverAP()
{
	_ap += 10;
	if (_ap > 40)
		_ap = 40;
}

void	Character::equip(AWeapon* weapon)
{
	this->_curWeapon = weapon;
}

void	Character::attack(Enemy* enemy)
{
	if (_ap < _curWeapon->getAPCost())
	{
		std::cout << "Need more AP" << std::endl;	
		return ;
	}
	this->_ap -= _curWeapon->getAPCost();
	enemy->takeDamage(this->_curWeapon->getDamage());
	std::cout << this->_name << " attacks " << enemy->getType()
		<< " with a " << this->_curWeapon->getName()
		<< std::endl;
	this->_curWeapon->attack();

}

int		Character::getAP() const
{
	return _ap;
}

std::string const &Character::getName() const
{
	return this->_name;
}

const AWeapon	*Character::getWeapon() const
{
	return _curWeapon;
}

std::ostream	&operator<<(std::ostream &out, const Character &ch)
{
	out << ch.getName() << " has " << ch.getAP()
		<< " AP and ";
	const AWeapon	*weapon = ch.getWeapon();
	if (!weapon)
		out << "is unarmed";
	else
		out << "wields a " << weapon->getName();
	out << std::endl;
	return out;
}
