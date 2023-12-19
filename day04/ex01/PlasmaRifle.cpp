#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
	
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &rhs) : AWeapon(rhs)
{

}

PlasmaRifle	&PlasmaRifle::operator=(const PlasmaRifle &rhs)
{
	AWeapon::operator=(rhs);
	return *this;
}

PlasmaRifle::~PlasmaRifle()
{
	
}

void	PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
