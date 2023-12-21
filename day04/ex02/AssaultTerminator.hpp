#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	private:
		
	public:
		/* COPLIEN */
		AssaultTerminator();
		AssaultTerminator(const AssaultTerminator &rhs);
		~AssaultTerminator();
		AssaultTerminator &operator=(const AssaultTerminator &rhs);
		/**/
		ISpaceMarine	*clone() const;
		void		battleCry() const;
		void		rangedAttack() const;
		void		meleeAttack() const;
};

#endif
