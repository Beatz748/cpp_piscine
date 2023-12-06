#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

typedef unsigned int uint;

class	ClapTrap
{
	protected:
		uint			_hitPoints;
		uint			_maxHitPoints;
		uint			_energyPoints;
		uint			_maxEnergyPoints;
		uint			_lvl;
		std::string		_name;
		uint			_meleeAttackDamage;
		uint			_rangedAttackDamage;
		uint			_armourDamageReduction;
	public:
			/* CANONICAL */
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap &rhs);
		ClapTrap	&operator=(const ClapTrap &rhs);
			/* Health changes */
		void		takeDamage(uint amount);
		void		beRepaired(uint amount);
			/* GET */
		uint		getHitPoints() const;
		uint		getMaxHitPoints() const;
		uint		getEnergyPoints() const;
		uint		getMaxEnergyPoints() const;
		uint		getLvl() const;
		std::string	getName() const;
		uint		getMeleeAtackDamage() const;
		uint		getRangedAtackDamage() const;
		uint		getArmourDamageReduction() const;
			/* SET */
		void		setHitPoints(uint hitPoints);
		void		setMaxHitPoints(uint maxHitPoints);         
		void		setEnergyPoints(uint energyPoints);
		void		setMaxEnergyPoints(uint maxEnergyPoints);
		void		setLvl(uint lvl);              
		void		setName(std::string name);
		void		setMeleeAtackDamage(uint meleeAttack);
		void		setRangedAtackDamage(uint rangedAttack);
		void		setArmourDamageReduction(uint armour);
};

#endif
