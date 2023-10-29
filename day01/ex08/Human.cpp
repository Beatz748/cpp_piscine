#include "Human.hpp"
#include <cstdint>

void Human::meleeAttack(std::string const &target) const
{
	std::cout << "Attacking " << target << " with a melee attack!" << std::endl;
}

void Human::rangedAttack(std::string const &target) const
{
	std::cout << "Attacking " << target << " with a ranged attack!" << std::endl;
}

void Human::intimidatingShout(std::string const &target) const
{
	std::cout << "Intimidating " << target << " with a shout!" << std::endl;

}

void Human::action(std::string const &action_name, std::string const &target) const
{
        typedef void (Human::*ActionPtr)(std::string const &) const;


	ActionPtr actions[3] = 
	{
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout
	};
	const std::string	actionNames[3] =
	{
		"meleeAttack",
		"rangedAttack",
		"intimidatingShout"
	};

	for (std::uint8_t i = 0; i < 3; ++i)
	{
		if (action_name == actionNames[i])
		{
			(this->*actions[i])(target);
			return ;
		}
	}
	std::cout << "UNKNOWN ATTACKINGGGGGGGGGGG" << std::endl;
}
