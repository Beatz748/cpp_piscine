#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure() : AMateria("cure")
{

}

Cure::Cure(const Cure & rhs) : AMateria("cure")
{
	this->setXP(rhs.getXP());
}

Cure::~Cure()
{

}

Cure	*Cure::clone() const
{
	return new Cure(*this);
}

void		Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName()
		<< "'s wounds *" << std::endl;

	this->setXP(this->getXP() + 10);
}


