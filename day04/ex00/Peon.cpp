#include "Peon.hpp"

Peon::Peon(const std::string &name) : Victim(name)
{
	std::cout << "Zog zog.\n";
}

Peon::Peon(const Peon &rhs) : Victim(rhs)
{
	
}

Peon	&Peon::operator=(const Peon &rhs)
{
	this->Victim::operator=(rhs);
	return *this;
}

Peon::~Peon()
{
	std::cout << "Bleuark..."
		<< std::endl;
}

void	Peon::getPolymorphed() const
{
	std::cout << Victim::getName()
		<< " has been turned into a pink pony !\n";
}
