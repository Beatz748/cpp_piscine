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

void		FragTrap::takeDamage(uint amount)
{
	uint	damage;
	uint	armour;
	uint	hitPoints = getHitPoints();


	if (getHitPoints() == 0)
	{
		std::cout << "FR4G-TP " << getName() << " is already dead!"
			<<std::endl;
	}
	armour = getArmourDamageReduction();
	if (armour > amount)
	{
		std::cout << "FR4G-TP " << getName() << " has " << armour
			<< " points of armour. Damage " << amount << " is ineffective for this";
	}
	damage = amount - armour;
	if (damage < getHitPoints())
	{
		setHitPoints(hitPoints - damage);
		std::cout << "FR4G-TP " << getName() << " damaged with " << damage
			<< " points. Now he has " << getHitPoints() << "/"
			<< getMaxHitPoints() << std::endl;
	}
	else
	{
		setHitPoints(0);
		std::cout << "FR4G-TP " << getName() << " damaged with " << damage
			<< " points. Now he has " << getHitPoints() << "/"
			<< getMaxHitPoints() << " and he is dead" << std::endl;
	}
}

void		FragTrap::beRepaired(uint amount)
{
	uint	hp = getHitPoints();
	uint	repairedHp = (getMaxHitPoints() > hp + amount ? getMaxHitPoints() : hp + amount);

	std::cout << "FR4G-TP " << getName() << " has repaired "
		<< amount << " points and now " << repairedHp
		<< "/" << getMaxHitPoints() << std::endl;
}


uint	FragTrap::getHitPoints() const
{
	return _hitPoints;
}

uint	FragTrap::getMaxHitPoints() const
{
	return _maxHitPoints;
}

uint	FragTrap::getEnergyPoints() const
{
	return _energyPoints;
}

uint	FragTrap::getLvl() const
{
	return _lvl;
}

std::string	FragTrap::getName() const
{
	return _name;
}

uint		FragTrap::getMeleeAtackDamage() const
{
	return _meleeAttackDamage;
}

uint		FragTrap::getRangedAtackDamage() const
{
	return _rangedAttackDamage;
}

uint		FragTrap::getArmourDamageReduction() const
{
	return _armourDamageReduction;
}


void		FragTrap::setHitPoints(uint hitPoints)
{
	if (hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
	else
		_hitPoints = hitPoints;
}

void		FragTrap::setMaxHitPoints(uint maxHitPoints)
{
	_maxHitPoints = maxHitPoints;
}
         
void		FragTrap::setEnergyPoints(uint energyPoints)
{
	if (energyPoints > _maxEnergyPoints)
		_energyPoints = _maxEnergyPoints;
	else
		_energyPoints = energyPoints;
}

void		FragTrap::setMaxEnergyPoints(uint maxEnergyPoints)
{
	_maxEnergyPoints = maxEnergyPoints;
}


void		FragTrap::setLvl(uint lvl)
{
	_lvl = lvl;
}
              
void		FragTrap::setName(std::string name)
{
	_name = name;
}

void		FragTrap::setMeleeAtackDamage(uint meleeAttack)
{
	_meleeAttackDamage = meleeAttack;
}

void		FragTrap::setRangedAtackDamage(uint rangedAttack)
{
	_rangedAttackDamage = rangedAttack;
}

void		FragTrap::setArmourDamageReduction(uint armour)
{
	_armourDamageReduction = armour;
}


void		FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	uint	ep = getEnergyPoints();
	if (ep < 25)
	{
		std::cout << "Only " << ep
			<< " points of energy. Not enought for vaulthunter_dot_exe"
			<< std::endl;
		return;
	}
	setEnergyPoints(ep - 25);

	void	(FragTrap::*actions[5])(std::string const &) const =
	{
		&FragTrap::rangedAttack,
		&FragTrap::toiletAttack,
		&FragTrap::waterAttack,
		&FragTrap::juiceAttack,
		&FragTrap::meleeAttack
	};

	srand(time(0));
	int	index = rand() % 5;

	std::string const	randomAttacks[5] = 
	{
		"ranged",
		"toilet",
		"water",
		"juice",
		"melee"
	};

	std::cout << "random attack: " << randomAttacks[index] << std::endl;

	(this->*actions[index])(target);
}

