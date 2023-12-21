#include "Character.hpp"

Character::Character(const std::string & name) : _name(name)
{
	for (int i = 0; i < this->_count ; ++i)
			this->_mtrls[i] = 0x000;
	this->_count = 0;
}

Character::~Character()
{
	for (int i = 0; i < this->_count; ++i)
		if (this->_mtrls[i])
			delete this->_mtrls[i];
}

Character::Character(const Character & rhs)
{
	*this = rhs;
}

Character	&Character::operator=(const Character & rhs)
{
	this->_name = rhs.getName();
	this->_count = rhs._count;
	for (int i = 0; i < 4; ++i)
		this->_mtrls[i] = rhs._mtrls[i];

	return *this;
}

const std::string	&Character::getName() const
{
	return this->_name;
}

void			Character::equip(AMateria *m)
{
	if (this->_count > 4)
		return;
	for (int i = 0; i < this->_count ; ++i)
		if (this->_mtrls[i] == m)
			return ;
	this->_mtrls[_count++] = m;
}

void			Character::unequip(int idx)
{
	if (idx < 0 || idx > _count)
		return ;
	this->_mtrls[idx] = NULL;
	this->_count--;
}

void			Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= this->_count)
		return ;
	this->_mtrls[idx]->use(target);
}


