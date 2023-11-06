#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>

typedef unsigned int uint;

class	ScavTrap
{
	private:
		uint		_hitPoints;
		uint		_maxHitPoints;
		uint		_energyPoints;
		uint		_maxEnergyPoints;
		uint		_lvl;
		std::string		_name;
		uint		_meleeAttackDamage;
		uint		_rangedAttackDamage;
		uint		_armourDamageReduction;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(const ScavTrap &rhs);
		ScavTrap	&operator=(const ScavTrap &rhs);

		void		rangedAttack(std::string const & target) const;
		void		meleeAttack(std::string const & target) const;
		void		cyberAttack(std::string const & target) const;
		void		waterAttack(std::string const & target) const;
		void		juiceAttack(std::string const & target) const;
		void		toiletAttack(std::string const & target) const;
		void		TVChallenge(std::string const & target) const;
		void		computerChallenge(std::string const & target) const;
		void		extraChallenge(std::string const & target) const;
		void		airChallenge(std::string const & target) const;
		void		takeDamage(uint amount);
		void		beRepaired(uint amount);

		uint		getHitPoints() const;
		uint		getMaxHitPoints() const;
		uint		getEnergyPoints() const;
		uint		getMaxEnergyPoints() const;
		uint		getLvl() const;
		std::string	getName() const;
		uint		getMeleeAtackDamage() const;
		uint		getRangedAtackDamage() const;
		uint		getArmourDamageReduction() const;

		void		setHitPoints(uint hitPoints);
		void		setMaxHitPoints(uint maxHitPoints);         
		void		setEnergyPoints(uint energyPoints);
		void		setMaxEnergyPoints(uint maxEnergyPoints);
		void		setLvl(uint lvl);              
		void		setName(std::string name);
		void		setMeleeAtackDamage(uint meleeAttack);
		void		setRangedAtackDamage(uint rangedAttack);
		void		setArmourDamageReduction(uint armour);

		void		challengeNewcomer(std::string const & target) const;
};

#endif
