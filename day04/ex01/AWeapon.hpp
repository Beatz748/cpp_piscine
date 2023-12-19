#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <cstddef>
#include <string>
#include <iostream>

#include <string>

class AWeapon
{
	private:
		std::string	_name;
		std::size_t	_damage;
		std::size_t	_apcost;
	public:
		AWeapon(const AWeapon &rhs);
		AWeapon	&operator=(const AWeapon &rhs);
		AWeapon(std::string const & name, int apcost, int damage);
		virtual ~AWeapon();
		std::string	getName() const;
		int	getAPCost() const;
		int	getDamage() const;

		void	setName(std::string name);
		void	setAPCost(int apcost);
		void	setDamage(int damage);

		virtual void attack() const = 0;
};

#endif
