#include "Pony.hpp"
#include <iomanip>
Pony::Pony()
{
	setHeight(0);
	setWeight(0);
	setName("");
}

Pony::Pony(std::uint16_t _weight, std::uint16_t _height, std::string _name)
{
	setWeight(_weight);
	setHeight(_height);
	setName(_name);
}

void		Pony::setWeight(std::uint16_t _weight)
{
	weight = _weight;
}
  
void		Pony::setHeight(std::uint16_t _height)
{
	height = _height;
}

void		Pony::setName(std::string _name)
{
	name = _name;
}

std::uint16_t	Pony::getWeight() const
{
	return weight;
}

std::uint16_t	Pony::getHeight() const
{
	return height;
}

std::string	Pony::getName() const
{
	return name;
}

