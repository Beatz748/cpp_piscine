#include "AMateria.hpp"


AMateria::AMateria(const std::string &type)
{
	this->type = type;
	this->xp = 0;
}

AMateria::~AMateria()
{
	
}

void				AMateria::setXP(unsigned int XP)
{
	this->xp = XP;
}

const std::string	&AMateria::getType() const
{
	return this->type;
}

unsigned int		AMateria::getXP() const
{
	return xp;
}

void		AMateria::use(ICharacter &target)
{
	this->xp += 10;
	(void)target;
}


