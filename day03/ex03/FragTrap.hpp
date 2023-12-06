#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
			/* CANONICAL */
		FragTrap();
		FragTrap(std::string const & name);
		FragTrap(FragTrap const & rhs);
		FragTrap &operator=(FragTrap const & rhs);
		~FragTrap();

			/* Attacks */
		void		rangedAttack(std::string const & target) const;
		void		meleeAttack(std::string const & target) const;
		void		cyberAttack(std::string const & target) const;
		void		waterAttack(std::string const & target) const;
		void		juiceAttack(std::string const & target) const;
		void		toiletAttack(std::string const & target) const;
};

#endif
