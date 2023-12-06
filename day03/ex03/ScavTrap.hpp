#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
class	ScavTrap : public ClapTrap
{
	public:
			/* Canonical */
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & rhs);
		ScavTrap	&operator=(ScavTrap const & rhs);
		~ScavTrap();
			/* Challenges */
		void		TVChallenge(std::string const & target) const;
		void		computerChallenge(std::string const & target) const;
		void		extraChallenge(std::string const & target) const;
		void		airChallenge(std::string const & target) const;

		void		challengeNewcomer(std::string const & target) const;
};

#endif
