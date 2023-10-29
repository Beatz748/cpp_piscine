#include "Brain.hpp"
#include <sstream>


Brain::Brain()
{
	std::cout << "Brain constructor" << std::endl;
	setAddress();
}

Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}

std::string	Brain::identify() const
{
	return _address;
}
void		Brain::setAddress()
{
	std::stringstream buff;

	buff << "0x" << (void *)(this);
	_address = buff.str();
}
