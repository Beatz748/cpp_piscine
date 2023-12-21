#include "Squad.hpp"
#include "ISpaceMarine.hpp"

Squad::Squad() : _group(0x000), _count(0)
{

}

Squad::Squad(const Squad &rhs)
{
	*this = rhs;
}

Squad::~Squad()
{
	for (int i = 0; i < _count; ++i)
		delete _group[i];
	delete[] _group;
}

Squad &Squad::operator=(const Squad &rhs)
{
	for (int i = 0; i < _count; ++i)
		delete _group[i];
	delete[] _group;
	_count = rhs._count;
	if (_count)
		_group = new ISpaceMarine*[_count];
	for (int i = 0; i < _count; ++i)
		_group[i] = rhs._group[i]->clone();

	return *this;
}

int		Squad::getCount() const
{
	return _count;
}

ISpaceMarine*	Squad::getUnit(int num) const
{
	if (num < 0 || num > _count)
		return 0x000;
	return _group[num];
}

void		Squad::increaseSquad()
{
	ISpaceMarine	**res = new ISpaceMarine*[++_count]; 

	for (int i = 0; i < _count - 1; ++i)
		res[i] = _group[i];
	if (_group)
		delete[] _group;
	_group = res;
}

int		Squad::push(ISpaceMarine* marine)
{
	for (int i = 0; i < _count; ++i)
		if (_group[i] == marine)
			return _count;
	increaseSquad();
	_group[_count - 1] = marine;
	return _count;
}

