#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap()" << std::endl;
}

FragTrap::FragTrap(std::string const & name) : ClapTrap(name)
{
	std::cout << "FragTrap(std::string const & name)" << std::endl;
}

FragTrap::FragTrap(FragTrap const & rhs) : ClapTrap(rhs)
{
	std::cout << "FragTrap(FragTrap const & rhs)" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const & rhs)
{
	std::cout << "FragTrap = FragTrap const & rhs" << std::endl;

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

void		FragTrap::cyberAttack(std::string const & target) const
{
	std::cout << "FR4G-TP " << this->getName() << " attacks " << target \
		<< " with cuber attack, causing: " << this->getRangedAtackDamage()
		<< " points of damage!" << std::endl;
}



void		FragTrap::toiletAttack(std::string const & target) const
{
	std::cout << "FR4G-TP " << this->getName() << " attacks " << target \
		<< " with toilet attack, causing: " << this->getRangedAtackDamage()
		<< " points of damage!" << std::endl;
}

void		FragTrap::juiceAttack(std::string const & target) const
{
	std::cout << "FR4G-TP " << this->getName() << " attacks " << target \
		<< " with apple-juice attack, causing: " << this->getRangedAtackDamage()
		<< " points of damage!" << std::endl;
}



void		FragTrap::waterAttack(std::string const & target) const
{
	std::cout << "FR4G-TP " << this->getName() << " attacks " << target \
		<< " with water attack, causing: " << this->getRangedAtackDamage()
		<< " points of damage!" << std::endl;
}



void		FragTrap::rangedAttack(std::string const & target) const
{
	std::cout << "FR4G-TP " << this->getName() << " attacks " << target \
		<< " with ranged attack, causing: " << this->getRangedAtackDamage()
		<< " points of damage!" << std::endl;
}

void		FragTrap::meleeAttack(std::string const & target) const
{
	std::cout << "FR4G-TP " << this->getName() << " attacks " << target \
		<< " with melee attack, causing: " << this->getMeleeAtackDamage()
		<< " points of damage!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "~Fragtrap()" << std::endl;
}

