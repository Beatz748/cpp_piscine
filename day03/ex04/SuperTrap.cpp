#include "SuperTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

SuperTrap::SuperTrap()
{
	_hitPoints = FragTrap::_hitPoints;
	_maxHitPoints = FragTrap::_maxHitPoints;
	_energyPoints = NinjaTrap::_energyPoints;
	_maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
	_lvl = 1;
	_name = "Unknown";
	_meleeAttackDamage = NinjaTrap::_meleeAttackDamage;
	_rangedAttackDamage = FragTrap::_rangedAttackDamage;
	_armourDamageReduction = FragTrap::_armourDamageReduction;
	std::cout << "SuperTrap()" << std::endl;
}

SuperTrap::SuperTrap(std::string name) : FragTrap(name), NinjaTrap(name)
{	
	_hitPoints = FragTrap::_hitPoints;
	_maxHitPoints = FragTrap::_maxHitPoints;
	_energyPoints = NinjaTrap::_energyPoints;
	_maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
	_lvl = 1;
	_name = name;
	_meleeAttackDamage = NinjaTrap::_meleeAttackDamage;
	_rangedAttackDamage = FragTrap::_rangedAttackDamage;
	_armourDamageReduction = FragTrap::_armourDamageReduction;

	std::cout << "SuperTrap(name)" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "~SuperTrap()" << std::endl;
}

SuperTrap &SuperTrap::operator=(const SuperTrap &rhs)
{
	FragTrap::operator=(rhs);
	NinjaTrap::operator=(rhs);
	return *this;
}

SuperTrap::SuperTrap(const SuperTrap &rhs)
{
	*this = rhs;
}

void		SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::meleeAttack(target);
}
void		SuperTrap::meleeAttack(const std::string &target)
{
	NinjaTrap::meleeAttack(target);
}
