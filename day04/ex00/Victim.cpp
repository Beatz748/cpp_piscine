#include "Victim.hpp"

Victim::Victim(const std::string &name) : _name(name)
{
	std::cout << "Some random victim called " << getName()
		<< " hust popped !"
		<< std::endl;
}

Victim::Victim(const Victim &rhs)
{
	*this = rhs;
}

Victim::~Victim()
{
	std::cout << "Victim " << getName()
		<< " just died for no apparent reason !"
		<< std::endl;
}

Victim	&Victim::operator=(const Victim &rhs)
{
	_name = rhs.getName();

	return *this;
}

void	Victim::getPolymorphed()	const
{
	std::cout << getName()
		<< " has beed turned into a cute little sheep !\n";
}

std::ostream&	operator<<(std::ostream &out, const Victim &vic)
{
	std::cout << "I'm " << vic.getName()
		<< " and I like otters !"
		<< std::endl;
	return out;
}

const std::string	&Victim::getName() const
{
	return _name;
}
