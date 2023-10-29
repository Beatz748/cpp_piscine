#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class	HumanB
{
	private:
		std::string	_name;
		Weapon		*_weapon;
	public:
		HumanB(std::string name);
		HumanB(std::string name, Weapon &weapon);
		~HumanB();
		void			attack() const;
		std::string		getName() const;
		const Weapon		*getWeapon() const;
		void			setWeapon(Weapon &weapon);
};

#endif
