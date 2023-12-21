#ifndef MATERASOURCE_HPP
#define MATERASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include <string>

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_inv[4];
		int		_count;
	public:
		MateriaSource();
		~MateriaSource();
		void		learnMateria(AMateria *m);
		AMateria	*createMateria(const std::string &type);
};

#endif
