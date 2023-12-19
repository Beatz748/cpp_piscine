#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>
#include <iostream>

class Enemy
{
	private:
		int _hp;
		std::string _type;
		Enemy();
	public:
		/* COPLIEN */
		Enemy(const Enemy &rhs);
		virtual ~Enemy();
		Enemy &operator=(const Enemy &rhs);
		/**/
		Enemy(int hp, std::string const & type);
		std::string const	&getType() const;
		int			getHP() const;
		virtual void		takeDamage(int);
};

#endif
