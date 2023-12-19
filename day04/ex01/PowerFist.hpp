#ifndef POWERIFST_HPP
#define POWERIFST_HPP


#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	private:
		
	public:
		/* COPLIEN */
		PowerFist();
		PowerFist(const PowerFist &rhs);
		~PowerFist();
		PowerFist &operator=(const PowerFist &rhs);
		void	attack() const override;
};

#endif
