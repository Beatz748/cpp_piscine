#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <string>
class AWeapon
{
	private:

	public:
		AWeapon(std::string const & name, int apcost, int damage);
		virtual ~AWeapon();
		std::string	getName() const;
		int	getAPCost() const;
		int	getDamage() const;
		virtual void attack() const = 0;
};

#endif
