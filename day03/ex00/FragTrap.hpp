#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>

class	FragTrap
{
	private:
		unsigned int		_hitPoints;
		unsigned int		_maxHitPoints;
		unsigned int		_energyPoints;
		unsigned int		_maxEnergyPoints;
		unsigned int		_lvl;
		std::string		_name;
		unsigned int		_meleeAttackDamage;
		unsigned int		_rangedAttackDamage;
		unsigned int		_armourDamageReduction;
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(const FragTrap &rhs);
		FragTrap	&operator=(const FragTrap &rhs);

		void		rangedAttack(std::string const & target) const;
		void		meleeAttack(std::string const & target) const;
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		unsigned int	getHitPoints() const;
		unsigned int	getMaxHitPoints() const;
		unsigned int	getEnergyPoints() const;
		unsigned int	getMaxEnergyPoints() const;
		unsigned int	getLvl() const;
		unsigned int	getName() const;
		unsigned int	getMeleeAtackDamage() const;
		unsigned int	getRangedAtackDamage() const;
		unsigned int	getArmourDamageReduction() const;

		void		setHitPoints(unsigned int hitPoints);
		void		setMaxHitPoints(unsigned int maxHitPoints);         
		void		setEnergyPoints(unsigned int energyPoints);
		void		setMaxEnergyPoints(unsigned int maxEnergyPoints);
		void		setLvl(unsigned int lvl);              
		void		setName(std::string name);
		void		setMeleeAtackDamage(unsigned int meleeAttack);
		void		setRangedAtackDamage(unsigned int rangedAttack);
		void		setArmourDamageReduction(unsigned int armour);

		void		vaulthunter_dot_exe(std::string const &target);
};

#endif
