#include "Sorcerer.hpp"

Sorcerer::Sorcerer(const std::string &name, const std::string &title) : _name(name), _title(title)
{
	std::cout << getName() << ", " << getTitle()
		<< ", is born !"
		<< std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << getName() << ", " << getTitle()
		<< ", is dead. Consequences will never be the same !"
		<< std::endl;
}

Sorcerer &Sorcerer::operator=(const Sorcerer &rhs)
{
	this->_name = rhs.getName();
	this->_title = rhs.getTitle();

	return *this;
}

Sorcerer::Sorcerer(const Sorcerer &rhs)
{
	*this = rhs;
}

void	Sorcerer::polymorph(const Victim &vic) const
{
	vic.getPolymorphed();
}

const std::string	&Sorcerer::getName() const
{
	return _name;
}

const std::string	&Sorcerer::getTitle() const
{
	return _title;
}

std::ostream&	operator<<(std::ostream &out, const Sorcerer &sor)
{
	out << "I am " << sor.getName() << ", " << sor.getTitle()
		<< ", and I like ponies !"
		<< std::endl;

	return out;
}
