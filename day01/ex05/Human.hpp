#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"
#include <iostream>

class	Human
{
	private:
		const Brain _brain;
	public:
		Human();
		~Human();
		std::string	identify() const;
		const	Brain	&getBrain() const;
};

#endif
