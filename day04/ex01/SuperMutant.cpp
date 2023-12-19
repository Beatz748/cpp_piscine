#include "SuperMutant.hpp"
#include "Enemy.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &rhs) : Enemy(rhs)
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant	&SuperMutant::operator=(const SuperMutant &rhs)
{
	Enemy::operator=(rhs);

	return *this;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}

void	SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}
