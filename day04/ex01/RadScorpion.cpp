#include "RadScorpion.hpp"
#include "Enemy.hpp"

RadScorpion::RadScorpion() : Enemy(80, "Rad Scorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &rhs)  : Enemy(rhs)
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion	&RadScorpion::operator=(const RadScorpion &rhs)
{
	Enemy::operator=(rhs);

	return *this;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

void	RadScorpion::takeDamage(int damage)
{
	Enemy::takeDamage(damage);
}
