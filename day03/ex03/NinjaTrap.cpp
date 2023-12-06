#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap()
{
	std::cout << "NinjaTrap()" << std::endl;
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_lvl = 1;
	_name = "Unknown";
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armourDamageReduction = 0;
}

NinjaTrap::NinjaTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "NinjaTrap(const std::string name)" << std::endl;
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_lvl = 1;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armourDamageReduction = 0;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &rhs)
{
	std::cout << "operator=(NinjaTrap)" << std::endl;
	ClapTrap::operator=(rhs);
	return *this;
}

NinjaTrap::NinjaTrap(const NinjaTrap &rhs)
{
	std::cout << "NinjaTrap(const NinjaTrap &rhs)" << std::endl;
	*this = rhs;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "~NinjaTrap()" << std::endl;
}
void	NinjaTrap::ninjaShoebox(ClapTrap &target)
{
	std::cout << "Hello clap " << target.getName() << std::endl;
}
void	NinjaTrap::ninjaShoebox(FragTrap &target)
{
	std::cout << "Hello frag " << target.getName() << std::endl;
}
void	NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	std::cout << "Hello scav " << target.getName() << std::endl;
}
void	NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	std::cout << "Hello ninja" << target.getName() << std::endl;
}
