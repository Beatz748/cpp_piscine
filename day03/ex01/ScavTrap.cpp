#include "ScavTrap.hpp"
#include <__ranges/concepts.h>
#include <cstdlib>


ScavTrap::ScavTrap() : ScavTrap("Unknown")
{
	std::cout << "I'm noname SC4V-TP" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : _hitPoints(100), _maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50), _lvl(1), _name(name), _meleeAttackDamage(20), _rangedAttackDamage(15), _armourDamageReduction(3)
{
	std::cout << "I'm " << _name << " SC4V-TP" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor calling me=( {" << _name << "}" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &rhs)
{
	std::cout << "Copy for " << rhs._name << std::endl;
	*this = rhs;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs)
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

void		ScavTrap::cyberAttack(std::string const & target) const
{
	std::cout << "SC4V-TP " << this->getName() << " attacks " << target \
		<< " with cuber attack, causing: " << this->getRangedAtackDamage()
		<< " points of damage!" << std::endl;
}



void		ScavTrap::toiletAttack(std::string const & target) const
{
	std::cout << "SC4V-TP " << this->getName() << " attacks " << target \
		<< " with toilet attack, causing: " << this->getRangedAtackDamage()
		<< " points of damage!" << std::endl;
}



void		ScavTrap::juiceAttack(std::string const & target) const
{
	std::cout << "SC4V-TP " << this->getName() << " attacks " << target \
		<< " with apple-juice attack, causing: " << this->getRangedAtackDamage()
		<< " points of damage!" << std::endl;
}



void		ScavTrap::waterAttack(std::string const & target) const
{
	std::cout << "SC4V-TP " << this->getName() << " attacks " << target \
		<< " with water attack, causing: " << this->getRangedAtackDamage()
		<< " points of damage!" << std::endl;
}



void		ScavTrap::rangedAttack(std::string const & target) const
{
	std::cout << "SC4V-TP " << this->getName() << " attacks " << target \
		<< " with ranged attack, causing: " << this->getRangedAtackDamage()
		<< " points of damage!" << std::endl;
}

void		ScavTrap::meleeAttack(std::string const & target) const
{
	std::cout << "SC4V-TP " << this->getName() << " attacks " << target \
		<< " with melee attack, causing: " << this->getMeleeAtackDamage()
		<< " points of damage!" << std::endl;
}

void		ScavTrap::takeDamage(uint amount)
{
	uint	damage;
	uint	armour;
	uint	hitPoints = getHitPoints();


	if (getHitPoints() == 0)
	{
		std::cout << "SC4V-TP " << getName() << " is already dead!"
			<<std::endl;
	}
	armour = getArmourDamageReduction();
	if (armour > amount)
	{
		std::cout << "SC4V-TP " << getName() << " has " << armour
			<< " points of armour. Damage " << amount << " is ineffective for this";
	}
	damage = amount - armour;
	if (damage < getHitPoints())
	{
		setHitPoints(hitPoints - damage);
		std::cout << "SC4V-TP " << getName() << " damaged with " << damage
			<< " points. Now he has " << getHitPoints() << "/"
			<< getMaxHitPoints() << std::endl;
	}
	else
	{
		setHitPoints(0);
		std::cout << "SC4V-TP " << getName() << " damaged with " << damage
			<< " points. Now he has " << getHitPoints() << "/"
			<< getMaxHitPoints() << " and he is dead" << std::endl;
	}
}

void		ScavTrap::beRepaired(uint amount)
{
	uint	hp = getHitPoints();
	uint	repairedHp = (getMaxHitPoints() > hp + amount ? getMaxHitPoints() : hp + amount);

	std::cout << "SC4V-TP " << getName() << " has repaired "
		<< amount << " points and now " << repairedHp
		<< "/" << getMaxHitPoints() << std::endl;
}


uint	ScavTrap::getHitPoints() const
{
	return _hitPoints;
}

uint	ScavTrap::getMaxHitPoints() const
{
	return _maxHitPoints;
}

uint	ScavTrap::getEnergyPoints() const
{
	return _energyPoints;
}

uint	ScavTrap::getLvl() const
{
	return _lvl;
}

std::string	ScavTrap::getName() const
{
	return _name;
}

uint		ScavTrap::getMeleeAtackDamage() const
{
	return _meleeAttackDamage;
}

uint		ScavTrap::getRangedAtackDamage() const
{
	return _rangedAttackDamage;
}

uint		ScavTrap::getArmourDamageReduction() const
{
	return _armourDamageReduction;
}


void		ScavTrap::setHitPoints(uint hitPoints)
{
	if (hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
	else
		_hitPoints = hitPoints;
}

void		ScavTrap::setMaxHitPoints(uint maxHitPoints)
{
	_maxHitPoints = maxHitPoints;
}
         
void		ScavTrap::setEnergyPoints(uint energyPoints)
{
	if (energyPoints > _maxEnergyPoints)
		_energyPoints = _maxEnergyPoints;
	else
		_energyPoints = energyPoints;
}

void		ScavTrap::setMaxEnergyPoints(uint maxEnergyPoints)
{
	_maxEnergyPoints = maxEnergyPoints;
}


void		ScavTrap::setLvl(uint lvl)
{
	_lvl = lvl;
}
              
void		ScavTrap::setName(std::string name)
{
	_name = name;
}

void		ScavTrap::setMeleeAtackDamage(uint meleeAttack)
{
	_meleeAttackDamage = meleeAttack;
}

void		ScavTrap::setRangedAtackDamage(uint rangedAttack)
{
	_rangedAttackDamage = rangedAttack;
}

void		ScavTrap::setArmourDamageReduction(uint armour)
{
	_armourDamageReduction = armour;
}

void	ScavTrap::TVChallenge(std::string const & target) const
{
	std::cout << "SC4V-TP " << getName()
		<< "watching challenge on TV with " << target
		<< std::endl;
}

void	ScavTrap::computerChallenge(std::string const & target) const
{
	std::cout << "SC4V-TP " << getName()
		<< "playing computer challenge versus " << target
		<< std::endl;
}

void	ScavTrap::extraChallenge(std::string const & target) const
{
	std::cout << "SC4V-TP " << getName()
		<< "has EEEEEEEEEExtraCHALLENGE on " << target
		<< std::endl;
}

void	ScavTrap::airChallenge(std::string const & target) const
{
	std::cout << "SC4V-TP " << getName()
		<< "has air challnge on boeing 748 with " << target
		<< std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const & target) const
{
	void	(ScavTrap::*actions[4])(std::string const &) const =
	{
		&ScavTrap::airChallenge,
		&ScavTrap::computerChallenge,
		&ScavTrap::extraChallenge,
		&ScavTrap::TVChallenge
	};

	std::string const	challenges[4] =
	{
		"air",
		"computer",
		"extra",
		"TV"
	};
	srand(time(0));

	int	idx = rand() % 4;

	std::cout << "Choosen challenge: " << challenges[idx];
	(this->*actions[idx])(target);
}
