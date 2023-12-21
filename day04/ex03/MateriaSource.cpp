#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->_count = 0;
	for (int i = 0; i < 4; ++i)
		this->_inv[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->_count; ++i)
		if (this->_inv[i])
			delete this->_inv[i];
}

void		MateriaSource::learnMateria(AMateria *m)
{
	if (this->_count >= 4)
		return ;
	this->_inv[_count++] = m;
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < this->_count; ++i)
		if (this->_inv[i]->getType() == type)
			return this->_inv[i]->clone();
	return 0x000;
}

