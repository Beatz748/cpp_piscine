#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"

class Squad : public ISquad
{
	private:
		ISpaceMarine	**_group;
		int		_count;
		void		increaseSquad();
	public:
		/* COPLIEN */
		Squad();
		Squad(const Squad &rhs);
		virtual ~Squad();
		Squad &operator=(const Squad &rhs);
		int		getCount() const;
		ISpaceMarine*	getUnit(int) const;
		int		push(ISpaceMarine*);
};

#endif
