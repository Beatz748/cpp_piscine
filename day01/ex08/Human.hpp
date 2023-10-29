#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <iostream>

class Human {
	private:
		void meleeAttack(std::string const &target) const;
		void rangedAttack(std::string const &target) const;
		void intimidatingShout(std::string const &target) const;
	
	public:
		void action(std::string const &action_name, std::string const &target) const;
};






#endif
