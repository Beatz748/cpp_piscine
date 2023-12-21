#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "AMateria.hpp"

class AMateria;

class Character : public ICharacter
{
	private:
		std::string		_name;
		AMateria		*_mtrls[4];
		int			_count;
	public:
		Character(const std::string &name);
		Character(const Character & rhs);
		Character	&operator=(const Character & rhs);
		~Character();
		const std::string	&getName() const;
		void			equip(AMateria *m);
		void			unequip(int idx);
		void			use(int idx, ICharacter &target);
};

#endif
