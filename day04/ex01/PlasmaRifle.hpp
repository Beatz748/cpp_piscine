#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class	PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle();
		PlasmaRifle(std::string name);
		PlasmaRifle(const PlasmaRifle &rhs);
		virtual ~PlasmaRifle();
		PlasmaRifle	&operator=(const PlasmaRifle &rhs);
		void	attack() const override;
};

#endif
