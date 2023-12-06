#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap()" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap(std::string name)" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & rhs) : ClapTrap(rhs)
{
	std::cout << "ScavTrap(ScavTrap const & rhs)" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &other)
{
	std::cout << "ScavTrap = ScavTrap const & rhs" << std::endl;
	(void)other;
	std::cout << this->_name << ": Hey ! At your service." << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "~ScavTrap()" << std::endl;
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
