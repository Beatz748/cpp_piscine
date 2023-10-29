#include "ZombieEvent.hpp"


void	ZombieEvent::setZombieType(Zombie::Type type)
{
	_type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie	*zombie = new Zombie(_type, name);
	return zombie;
}

Zombie*	ZombieEvent::randomChump(std::string name)
{
	Zombie	*zombie = new Zombie(_type, name);
	zombie->announce();
	return zombie;
}

ZombieEvent::ZombieEvent()
{
	setZombieType(Zombie::RUNNER);
}
