#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class	ZombieHorde
{
	private:
		int	_n;
		Zombie	*_horde;
	public:
		ZombieHorde(int N);
		void	announce() const;
};

#endif
