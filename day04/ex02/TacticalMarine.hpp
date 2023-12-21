#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	private:
		
	public:
		/* COPLIEN */
		TacticalMarine();
		TacticalMarine(const TacticalMarine &rhs);
		~TacticalMarine();
		TacticalMarine &operator=(const TacticalMarine &rhs);
		/**/
		ISpaceMarine	*clone() const;
		void		battleCry() const;
		void		rangedAttack() const;
		void		meleeAttack() const;
};

#endif
