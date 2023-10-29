#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{
	private:
		Zombie::Type	_type;
	public:
		void	setZombieType(Zombie::Type type);
		Zombie*	newZombie(std::string name);
		Zombie*	randomChump(std::string name);
		ZombieEvent();
};

#endif
