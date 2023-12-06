#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
		SuperTrap();
		SuperTrap(std::string name);
		SuperTrap(const SuperTrap &rhs);
		~SuperTrap();
		SuperTrap	&operator=(const SuperTrap &rhs);
		void		rangedAttack(std::string const & target);
		void	meleeAttack(const std::string &target);
};

#endif
