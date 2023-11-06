#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>

typedef unsigned int uint;

class	FragTrap
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
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(const FragTrap &rhs);
		FragTrap	&operator=(const FragTrap &rhs);

		void		rangedAttack(std::string const & target) const;
		void		meleeAttack(std::string const & target) const;
		void		cyberAttack(std::string const & target) const;
		void		waterAttack(std::string const & target) const;
		void		juiceAttack(std::string const & target) const;
		void		toiletAttack(std::string const & target) const;
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

		void		vaulthunter_dot_exe(std::string const &target);
};

#endif
