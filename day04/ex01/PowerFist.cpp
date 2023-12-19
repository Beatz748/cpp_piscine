#include "PowerFist.hpp"
#include "AWeapon.hpp"

PowerFist::PowerFist() : AWeapon("PowerFist", 8, 50)
{

}

PowerFist::PowerFist(const PowerFist &rhs) : AWeapon(rhs)
{

}

PowerFist	&PowerFist::operator=(const PowerFist &rhs)
{
	AWeapon::operator=(rhs);
	return *this;
}

PowerFist::~PowerFist()
{
	
}

void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

