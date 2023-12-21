#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
private:
	std::string		type;
	unsigned int	xp;
public:
	AMateria(const std::string &type);
	virtual ~AMateria();
	void				setXP(unsigned int XP);
	const std::string	&getType() const;
	unsigned int		getXP() const;
	virtual AMateria	*clone() const = 0;
	virtual void		use(ICharacter &target);
};

#endif
