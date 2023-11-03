#include "FragTrap.hpp"
#include <__ranges/concepts.h>
#include <cstdlib>


FragTrap::FragTrap() : _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _lvl(1), _name("Unknown"), _meleeAttackDamage(30), _rangedAttackDamage(20), _armourDamageReduction(5)
{
	std::cout << "I'm noname FR4G-TP" << std::endl;
}

FragTrap::FragTrap(std::string name) : _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _lvl(1), _name(name), _meleeAttackDamage(30), _rangedAttackDamage(20), _armourDamageReduction(5)
{
	std::cout << "I'm " << _name << " FR4G-TP" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor calling me=( {" << _name << "}" << std::endl;
}

FragTrap::FragTrap(const FragTrap &rhs)
{
	std::cout << "Copy for " << rhs._name << std::endl;
	*this = rhs;
}

FragTrap	&FragTrap::operator=(const FragTrap &rhs)
{
	std::cout << "Assignation for " << rhs._name << std::endl;

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


void		FragTrap::rangedAttack(std::string const & target) const
{
	
}

void		FragTrap::meleeAttack(std::string const & target) const
{

}

void		FragTrap::takeDamage(unsigned int amount)
{

}

void		FragTrap::beRepaired(unsigned int amount)
{

}


unsigned int	FragTrap::getHitPoints() const
{

}

unsigned int	FragTrap::getMaxHitPoints() const
{

}

unsigned int	FragTrap::getEnergyPoints() const
{

}

unsigned int	FragTrap::getLvl() const
{

}

unsigned int	FragTrap::getName() const
{

}

unsigned int	FragTrap::getMeleeAtackDamage() const
{

}

unsigned int	FragTrap::getRangedAtackDamage() const
{

}

unsigned int	FragTrap::getArmourDamageReduction() const
{

}


void		FragTrap::setHitPoints(unsigned int hitPoints)
{
	if (hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
	else
		_hitPoints = hitPoints;
}

void		FragTrap::setMaxHitPoints(unsigned int maxHitPoints)
{
	_maxHitPoints = maxHitPoints;
}
         
void		FragTrap::setEnergyPoints(unsigned int energyPoints)
{
	if (energyPoints > _maxEnergyPoints)
		_energyPoints = _maxEnergyPoints;
	else
		_energyPoints = energyPoints;
}

void		FragTrap::setMaxEnergyPoints(unsigned int maxEnergyPoints)
{
	_maxEnergyPoints = maxEnergyPoints;
}


void		FragTrap::setLvl(unsigned int lvl)
{
	_lvl = lvl;
}
              
void		FragTrap::setName(std::string name)
{
	_name = name;
}

void		FragTrap::setMeleeAtackDamage(unsigned int meleeAttack)
{
	_meleeAttackDamage = meleeAttack;
}

void		FragTrap::setRangedAtackDamage(unsigned int rangedAttack)
{
	_rangedAttackDamage = rangedAttack;
}

void		FragTrap::setArmourDamageReduction(unsigned int armour)
{
	_armourDamageReduction = armour;
}


void		FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	
}

