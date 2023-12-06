#include "ClapTrap.hpp"
#include <__ranges/concepts.h>
#include <cstdlib>


ClapTrap::ClapTrap() : _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _lvl(1), _name("Unknown"), _meleeAttackDamage(30), _rangedAttackDamage(20), _armourDamageReduction(5)
{
	std::cout << "ClapTrap()" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _lvl(1), _name(name), _meleeAttackDamage(30), _rangedAttackDamage(20), _armourDamageReduction(5)
{
	std::cout << "ClapTrap(std::string name)" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "~ClapTrap()" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
	std::cout << "ClapTrap(ClapTrap const & rhs)" << std::endl;
	*this = rhs;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "ClapTrap = ClapTrap const & rhs" << std::endl;

	this->setHitPoints(rhs._hitPoints);
	this->setMaxEnergyPoints(rhs._maxHitPoints);
	this->setEnergyPoints(rhs._energyPoints);
	this->setMaxEnergyPoints(rhs._maxEnergyPoints);
	this->setLvl(rhs._lvl);
	this->setName(rhs._name);
	this->setMeleeAtackDamage(rhs._meleeAttackDamage);
	this->setRangedAtackDamage(rhs._rangedAttackDamage);
	this->setArmourDamageReduction(rhs._armourDamageReduction);
	
	return *this;
}
void		ClapTrap::takeDamage(uint amount)
{
	uint	damage;
	uint	armour;
	uint	hitPoints = getHitPoints();


	if (getHitPoints() == 0)
	{
		std::cout << "CL4P-TP " << getName() << " is already dead!"
			<<std::endl;
	}
	armour = getArmourDamageReduction();
	if (armour > amount)
	{
		std::cout << "CL4P-TP " << getName() << " has " << armour
			<< " points of armour. Damage " << amount << " is ineffective for this";
	}
	damage = amount - armour;
	if (damage < getHitPoints())
	{
		setHitPoints(hitPoints - damage);
		std::cout << "CL4P-TP " << getName() << " damaged with " << damage
			<< " points. Now he has " << getHitPoints() << "/"
			<< getMaxHitPoints() << std::endl;
	}
	else
	{
		setHitPoints(0);
		std::cout << "CL4P-TP " << getName() << " damaged with " << damage
			<< " points. Now he has " << getHitPoints() << "/"
			<< getMaxHitPoints() << " and he is dead" << std::endl;
	}
}

void		ClapTrap::beRepaired(uint amount)
{
	uint	hp = getHitPoints();
	uint	repairedHp = (getMaxHitPoints() < hp + amount ? getMaxHitPoints() : hp + amount);

	std::cout << "MAX: " << getMaxHitPoints() << " hp now = " << hp << " amount: " << amount << " repairedFin = " << repairedHp << std::endl;

	std::cout << "CL4P-TP " << getName() << " has repaired "
		<< amount << " points and now " << repairedHp
		<< "/" << getMaxHitPoints() << std::endl;
}


uint	ClapTrap::getHitPoints() const
{
	return _hitPoints;
}

uint	ClapTrap::getMaxHitPoints() const
{
	return _maxHitPoints;
}

uint	ClapTrap::getEnergyPoints() const
{
	return _energyPoints;
}

uint	ClapTrap::getLvl() const
{
	return _lvl;
}

std::string	ClapTrap::getName() const
{
	return _name;
}

uint		ClapTrap::getMeleeAtackDamage() const
{
	return _meleeAttackDamage;
}

uint		ClapTrap::getRangedAtackDamage() const
{
	return _rangedAttackDamage;
}

uint		ClapTrap::getArmourDamageReduction() const
{
	return _armourDamageReduction;
}


void		ClapTrap::setHitPoints(uint hitPoints)
{
	if (hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
	else
		_hitPoints = hitPoints;
}

void		ClapTrap::setMaxHitPoints(uint maxHitPoints)
{
	_maxHitPoints = maxHitPoints;
}
         
void		ClapTrap::setEnergyPoints(uint energyPoints)
{
	if (energyPoints > _maxEnergyPoints)
		_energyPoints = _maxEnergyPoints;
	else
		_energyPoints = energyPoints;
}

void		ClapTrap::setMaxEnergyPoints(uint maxEnergyPoints)
{
	_maxEnergyPoints = maxEnergyPoints;
}


void		ClapTrap::setLvl(uint lvl)
{
	_lvl = lvl;
}
              
void		ClapTrap::setName(std::string name)
{
	_name = name;
}

void		ClapTrap::setMeleeAtackDamage(uint meleeAttack)
{
	_meleeAttackDamage = meleeAttack;
}

void		ClapTrap::setRangedAtackDamage(uint rangedAttack)
{
	_rangedAttackDamage = rangedAttack;
}

void		ClapTrap::setArmourDamageReduction(uint armour)
{
	_armourDamageReduction = armour;
}

