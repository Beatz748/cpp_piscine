#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type)
{

}

Enemy	&Enemy::operator=(const Enemy &rhs)
{
	this->_hp = rhs.getHP();
	this->_type = rhs.getType();

	return *this;
}

Enemy::Enemy(const Enemy &rhs) : _hp(rhs.getHP()), _type(rhs.getType())
{

}

Enemy::~Enemy()
{

}

int	Enemy::getHP() const
{
	return _hp;
}

std::string const	&Enemy::getType() const
{
	return _type;
}

void	Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return ;
	this->_hp -= damage;
	if (this->_hp < 0)
		this->_hp = 0;
}
