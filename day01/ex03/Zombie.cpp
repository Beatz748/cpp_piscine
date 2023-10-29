#include "Zombie.hpp"

Zombie::Zombie()
{
	setType(RUNNER);
	setName("Unknown");
}

Zombie::Zombie(Type type, std::string name)
{
	setType(type);
	setName(name);
}

void		Zombie::announce() const
{
	std::cout << "#($#@) MA NAME: " << getName() << " I$#AM: " << typeToString(getType()) << " AND I@$*($#@) NEE$#D Y@#$R BR@!NS" << std::endl;
}

Zombie::Type	Zombie::getType() const
{
	return _type;
}

std::string	Zombie::getName() const
{
	return _name;
}

void		Zombie::setType(Type type)
{
	_type = type;
}

void		Zombie::setName(std::string name)
{
	_name = name;
}

std::string	Zombie::typeToString(Type type) const
{
	std::string typeString;
	switch (type) {
		case WALKER:
			typeString = "Walker";
			break;
		case RUNNER:
			typeString = "Runner";
			break;
		case CRAWLER:
			typeString = "Crawler";
			break;
		default:
			typeString = "Unknown";
			break;
	}
	return typeString;
}
