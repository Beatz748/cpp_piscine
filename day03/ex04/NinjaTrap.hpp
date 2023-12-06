#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public  virtual ClapTrap
{
	public:
		/* CANONICAL */
		NinjaTrap();
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const & rhs);
		~NinjaTrap();
		NinjaTrap &operator=(NinjaTrap const & rhs);
		void	meleeAttack(const std::string &target);
		void	ninjaShoebox(ClapTrap &target);
		void	ninjaShoebox(ScavTrap &target);
		void	ninjaShoebox(FragTrap &target);
		void	ninjaShoebox(NinjaTrap &target);
};

#endif
