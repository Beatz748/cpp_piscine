#ifndef ICE_HPP
#define ICE_HPP

#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	private:
	public:
		Ice();
		Ice(const Ice &rhs);
		virtual ~Ice();
		Ice	*clone() const override;
		void		use(ICharacter &target) override;
};

#endif

