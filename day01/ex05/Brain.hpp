#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <cstdint>
#include <string>
#include <iostream>

class	Brain
{
	private:
		std::string	_address;
	public:
		Brain();
		~Brain();
		std::string	identify() const;
		void		setAddress();
};

#endif
