#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
	private:
		
	public:
		/* COPLIEN */
		SuperMutant();
		SuperMutant(const SuperMutant &rhs);
		virtual ~SuperMutant();
		SuperMutant &operator=(const SuperMutant &rhs);

		virtual void	takeDamage(int) override;
};

#endif
