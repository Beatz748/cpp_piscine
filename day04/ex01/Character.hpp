#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <iostream>

class Character
{
	private:
		std::string	_name;
		int		_ap;
		AWeapon		*_curWeapon;
	public:
		/* COPLIEN */
		~Character();
		/**/
		Character(std::string const & name);
		void	recoverAP();
		void	equip(AWeapon*);
		void	attack(Enemy*);
		const std::string &getName() const;
		int			getAP() const;
		const AWeapon		*getWeapon() const;
};

std::ostream	&operator<<(std::ostream &out, const Character &ch);

#endif
