#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
	private:
		
	public:
		/* COPLIEN */
		RadScorpion();
		RadScorpion(const RadScorpion &rhs);
		~RadScorpion();
		RadScorpion &operator=(const RadScorpion &rhs);
		/**/
		virtual void	takeDamage(int) override;
};

#endif
