#ifndef CURE_HPP
#define CURE_HPP

#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	private:
	public:
		Cure();
		Cure(const Cure &rhs);
		virtual ~Cure();
		Cure	*clone() const override;
		void		use(ICharacter &target) override;
};

#endif

